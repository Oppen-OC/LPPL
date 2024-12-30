%{
	#include "header.h"
    #include <string.h>
	#include "libtds.h"
    int main_definida = 0;  // Variable para controlar la definición de main
	
%}

%union {
    int cent;   // Para constantes enteras
    char *ident; // Para identificadores
    Lista lista;
}

/* Definir los tokens con valores semánticos */
%token <cent> CTE_
%token <ident> id_

%token OPSUMA_ OPRESTA_ OPMULT_ OPDIV_ OPAND_ OPOR_ OPNOT_
%token COMPMAYOR_ COMPMENOR_ COMPMAYORIG_ COMPMENORIG_ OPASIG_ OPNOTASIG_ ASIG_
%token FOR_		IF_		ELSE_
%token INT_     BOOL_
%token READ_    PRINT_	RETURN_
%token TRUE_   FALSE_
%token LLAVE1_  LLAVE2_ PARENTESIS1_ PARENTESIS2_ CHT1_ CHT2_ SEMICOLON_ COMA_

%type <lista> listaParamForm paramForm paramAct listaParamAct

%type <cent> const decla listaDecla declaVar tipoSimp declaFunc
%type <cent> expre expreIgual expreRel expreAd expreMul expreUna expreSufi expreOp expreLogic
%type <cent> opLogic opIgual opRel opAd opMul opUna

%%

programa: {niv = 0; dvar = 0; cargaContexto(niv); }
    listaDecla
	{
    if(!main_definida){
        yyerror("El programa no tiene una función main ");
        }
    }
    ;

listaDecla
    : decla { $$ = $1; }
    | listaDecla decla { $$ = $1 + $2;}
    ;

decla
    : declaVar
    | declaFunc
    ;

declaVar
    : tipoSimp id_ SEMICOLON_ {
        if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)) { 
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
    | tipoSimp id_ ASIG_ const SEMICOLON_ {
        if (!insTdS( $2, VARIABLE, $1, niv, dvar, -1)){
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else if (! (($1 == T_ENTERO && $4 == T_ENTERO) || ($1 == T_LOGICO && $4 == T_LOGICO)) ) {
            yyerror("Error de tipos en la instrucción de asignación");
        }else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
    | tipoSimp id_ CHT1_ CTE_ CHT2_ SEMICOLON_ {        
		int numelem = $4;
        if ($4 <= 0) {
            yyerror("Talla inapropiada del array");
            numelem = 0;
        } else if (($4 == T_ENTERO)) {
            yyerror("El indice del array debe ser un entero");
        }
        int refe = insTdA($1, numelem);
        if (!insTdS( $2, VARIABLE, T_ARRAY, niv, dvar, refe)) {
            yyerror("El id del array ya ha sido utilizado");
        } else {
            dvar += numelem * TALLA_TIPO_SIMPLE;
        }
    }
    ;

const
    : CTE_    { $$ = T_ENTERO; }
    | TRUE_   { $$ = T_LOGICO; }
    | FALSE_  { $$ = T_LOGICO; }
;

tipoSimp
    : INT_ { $$ = T_ENTERO; }
    | BOOL_ { $$ = T_LOGICO; }
;

declaFunc
    : tipoSimp id_ { niv = 1; cargaContexto(niv); } PARENTESIS1_ paramForm PARENTESIS2_{
        if (strcmp($2, "main") == 0) {
            if (main_definida == 1) {
                yyerror("La función 'main' ya ha sido definida");
            } else {
                main_definida = 1;
            }
        }
        if (!insTdS($2, FUNCION, $1, niv-1, dvar, $5.ref)) {
            yyerror("Función ya declarada");
        }
    }
    { $<cent>$ = dvar; dvar = 0; } bloque { 
        descargaContexto(niv); // Liberar contexto después de la declaración
        niv = 0;
        dvar = $<cent>8;
		$$ = $1;
    }
;

paramForm
    : listaParamForm{
        $$.ref = $1.ref;
        $$.talla = $1.talla;
    }
    |  {
        $$.ref = insTdD(-1, T_VACIO);
        $$.talla = 0;
    }
;

listaParamForm
	: tipoSimp id_ {
		$$.ref = insTdD(-1, $1);
		$$.talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        if(!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
    }
	| tipoSimp id_ COMA_ listaParamForm{
		$$.ref = insTdD($4.ref, $1);
		$$.talla = $4.talla + TALLA_TIPO_SIMPLE;
		if(!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1))  yyerror("Ya existe un parametro con el mismo identificador.");
	}

	;
	
bloque
    : LLAVE1_ declaVarLocal listInst RETURN_ expre SEMICOLON_ LLAVE2_ {
        // Obtener información de la función actual
        INF inf = obtTdD(-1);  // Obtiene la información del descriptor actual
        if (inf.tipo == T_ERROR) {
            yyerror("Error en la declaración de la función, no se puede verificar el return.");
        } else {
            if (inf.tipo != $5) {
                yyerror("Incompatibilidad de tipos en el return.");
            }
        }
    }
    ;

declaVarLocal
	: 
	| declaVarLocal declaVar
	;
	
listInst
	: 
	| listInst inst
	;
	
inst
    : LLAVE1_ listInst LLAVE2_
	| instExpre
	| instEntSal
	| instSelec
	| instIter
    ;

instExpre
	: expre SEMICOLON_
	| SEMICOLON_
	;

instEntSal
	: READ_ PARENTESIS1_ id_ PARENTESIS2_ SEMICOLON_ {
        SIMB simbolo = obtTdS($3);
        if (simbolo.t != T_ENTERO && simbolo.t != T_ERROR) {
            yyerror("READ solo acepta variables de tipo entero");
        }
    }
	| PRINT_ PARENTESIS1_ expre PARENTESIS2_ SEMICOLON_ {
        if ($3 != T_ENTERO) {
            yyerror("PRINT solo acepta expresiones de tipo entero");
        }
    } 
	;
	
instSelec
	: IF_ PARENTESIS1_ expre PARENTESIS2_ inst ELSE_ inst {
        if ($3 != T_ERROR) {
            if ($3 != T_LOGICO) {
                yyerror("La condición del IF debe ser de tipo lógico");
            }  
        }
    }
	;

instIter
	: FOR_ PARENTESIS1_ expreOp SEMICOLON_ expre SEMICOLON_ expreOp { 
        if ($3 != T_ERROR && $7 != T_ERROR){
            if ($3 == T_ARRAY || $7 == T_ARRAY) { yyerror("La expresion del 'for' ha de ser de tipo simple"); }
        }
		if ($5 != T_ERROR){
            if ($5 != T_LOGICO) {
                yyerror("La condición del FOR debe ser de tipo lógico");
            }
        }
    } PARENTESIS2_ inst
	;
	
expreOp
	: { $$ = T_VACIO; }
    | expre { $$ = $1; }
	;

expre
    : expreLogic { $$ = $1; }
    | id_ ASIG_ expre {
        $$ = T_ERROR;
        SIMB simbolo = obtTdS($1);
        if ($3 != T_ERROR){
            if (simbolo.t == T_ERROR) { yyerror("Variable no declarada"); } 
            else if (simbolo.t != $3) { yyerror("Error de tipo en la asignación"); }
            else if (simbolo.t != T_ERROR && $3 != T_ERROR) { $$ = simbolo.t; }
        }
    }
    | id_ CHT1_ expre CHT2_ ASIG_ expre{
        $$ = T_ERROR;
        SIMB simbolo = obtTdS($1);
        if (simbolo.t != T_ARRAY) { yyerror("El identificador no es un array"); }
        else {
            DIM array = obtTdA(simbolo.ref);
            if ($6 != T_ERROR) {
                if (array.telem != $6) { yyerror("Error de tipos en la asignación del array"); }
                else if ($3 != T_ENTERO){ yyerror("Error el indice del array tiene que ser un entero"); }
                else { $$ = simbolo.t; }
            }
        }
    }
    ;
	
expreLogic
	: expreIgual { $$ = $1; }
	| expreLogic opLogic expreIgual{
		$$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión lógica, no son del mismo tipo"); }
            else if ($1 != T_LOGICO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_LOGICO; }
        }
    }

expreIgual
	: expreRel { $$ = $1; }
	| expreIgual opIgual expreRel {
		$$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión de comparación, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { 
                yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); 
                $$ = T_LOGICO; 
            }
            else { 
                yyerror("Error tipos en la comparacion, deben ser expresiones logicas");
                $$ = T_ENTERO; 
            }
        }
    }
	;
	
expreRel
	: expreAd { $$ = $1; }
	| expreRel opRel expreAd {     
		$$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión de adición, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_LOGICO; }
        }
    }
	;
	
expreAd
	: expreMul { $$ = $1; }
	| expreAd opAd expreMul {
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión de multiplicación, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_ENTERO; }
        }
    }
	;
	
expreMul
	: expreUna { $$ = $1; }
	| expreMul opMul expreUna{
        $$ = T_ERROR;
        if ($1 != T_ERROR && $3 != T_ERROR){
            if ($1 != $3) { yyerror("Error de tipos en la expresión unaria, no son del mismo tipo"); }
            else if ($1 != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { $$ = T_ENTERO; }
        }
    }
	;
	
expreUna
	: expreSufi { $$ = $1; }
	| opUna expreUna {
        $$ = T_ERROR;
        if ($2 != T_ERROR){
            if ($2 != T_ENTERO) {
                if ($1 == OP_NOT) { yyerror("Incompatibilidad de tipos, no se puede negar un entero"); }
            }
            else if ($2 == T_LOGICO) { 
                if ($1 == OP_SUMA || $1 == OP_RESTA) { yyerror("Incompatibilidad de tipos, no se puede sumar o restar un booleano"); }
            } 
            else if ($2 == T_VACIO || $2 == T_ARRAY){
                yyerror("Error de tipo en la expresion unaria");
            }
            else $$=$2;
        }
    }
	; 
	
expreSufi 
	: const { $$ = $1; }
	| PARENTESIS1_ expre PARENTESIS2_ { $$ = $2; }
	| id_ {
		$$ = T_ERROR;
        SIMB sim = obtTdS($1);
		if (sim.t == T_ERROR){
			yyerror("No existe ninguna variable con ese identificador.");
		} else {
			$$ = sim.t;
		}

	}
	| id_ CHT1_ expre CHT2_ {
        SIMB sim = obtTdS($1);
        $$ = T_ERROR;
        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
        } else if ($3 != T_ENTERO) {
				yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
        } else { 
            DIM dim = obtTdA(sim.ref);
            $$ = dim.telem;
        }
	}
	| id_ PARENTESIS1_ paramAct PARENTESIS2_{
		SIMB sim = obtTdS($1);
        $$ = T_ERROR;
		if (sim.t == T_ERROR) {
            yyerror("No existe ninguna variable con ese identificador.");
        } else {
            INF inf = obtTdD(sim.ref);
            if (inf.tipo == T_ERROR) { yyerror("No existe ninguna funcion con ese identificador.");} 
            else {
                if (!cmpDom(sim.ref, $3.ref)) {
                	yyerror("Los parámetros actuales no coinciden con los declarados en la función.");
            	} else {
                	$$ = inf.tipo; // Tipo de retorno de la función
				}
            }
        }
    }
	;
	
paramAct
	: { $$.ref = -1; }
	| listaParamAct { $$.ref = $1.ref; }
	;
	
listaParamAct
	: expre { $$.ref = insTdD(-1, $1); }
	| expre COMA_ listaParamAct { $$.ref = insTdD($3.ref, $1); }
	;
	
	
opLogic
	: OPAND_	{$$ = OP_AND;}
    | OPOR_  	{$$ = OP_OR;}
    ;

opIgual
	: 	OPASIG_        {$$ = OP_IGUAL;}
    |   OPNOTASIG_     {$$ = OP_DISTINTO;}
    ;

opRel
	:  	COMPMAYOR_      {$$ = OP_MAYOR;}
    |   COMPMENOR_      {$$ = OP_MENOR;}
    |   COMPMAYORIG_	{$$ = OP_MAYORIG;}
    |   COMPMENORIG_   	{$$ = OP_MENORIG;}
    ;

opAd
	:   OPSUMA_    	{$$ = OP_SUMA;}
    |   OPRESTA_  	{$$ = OP_RESTA;}
    ;

opMul
	:  	OPMULT_  	{$$ = OP_MULT;}
    |   OPDIV_    	{$$ = OP_DIV;}
    ;

opUna
	:  	OPSUMA_   	{$$ = OP_SUMA;}
    |   OPRESTA_  	{$$ = OP_RESTA;}
    |   OPNOT_    	{$$ = OP_NOT;}
    ;
	

%%
