/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CTE_ = 258,                    /* CTE_  */
    id_ = 259,                     /* id_  */
    OPSUMA_ = 260,                 /* OPSUMA_  */
    OPRESTA_ = 261,                /* OPRESTA_  */
    OPMULT_ = 262,                 /* OPMULT_  */
    OPDIV_ = 263,                  /* OPDIV_  */
    OPAND_ = 264,                  /* OPAND_  */
    OPOR_ = 265,                   /* OPOR_  */
    OPNOT_ = 266,                  /* OPNOT_  */
    COMPMAYOR_ = 267,              /* COMPMAYOR_  */
    COMPMENOR_ = 268,              /* COMPMENOR_  */
    COMPMAYORIG_ = 269,            /* COMPMAYORIG_  */
    COMPMENORIG_ = 270,            /* COMPMENORIG_  */
    OPASIG_ = 271,                 /* OPASIG_  */
    OPNOTASIG_ = 272,              /* OPNOTASIG_  */
    ASIG_ = 273,                   /* ASIG_  */
    FOR_ = 274,                    /* FOR_  */
    IF_ = 275,                     /* IF_  */
    ELSE_ = 276,                   /* ELSE_  */
    INT_ = 277,                    /* INT_  */
    BOOL_ = 278,                   /* BOOL_  */
    READ_ = 279,                   /* READ_  */
    PRINT_ = 280,                  /* PRINT_  */
    RETURN_ = 281,                 /* RETURN_  */
    TRUE_ = 282,                   /* TRUE_  */
    FALSE_ = 283,                  /* FALSE_  */
    LLAVE1_ = 284,                 /* LLAVE1_  */
    LLAVE2_ = 285,                 /* LLAVE2_  */
    PARENTESIS1_ = 286,            /* PARENTESIS1_  */
    PARENTESIS2_ = 287,            /* PARENTESIS2_  */
    CHT1_ = 288,                   /* CHT1_  */
    CHT2_ = 289,                   /* CHT2_  */
    SEMICOLON_ = 290,              /* SEMICOLON_  */
    COMA_ = 291                    /* COMA_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "src/asin.y"

    int cent;   // Para constantes enteras
    char *ident; // Para identificadores
    Lista lista;

#line 106 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
