/* author: @MD TASNIN TANVIR (1807009) */

%{
	#include<stdio.h>
	#include <string.h>
	#include "tanvir.tab.h"
	#include<stdlib.h>
	

%}

Datatype "purno"|"okkhor"| "doshomik" | "double"
identifiers "tanvir_"[a-zA-Z]([a-zA-Z0-9])*
arithmatic_operator "pl"|"mi"|"gun"|"vag"|"pow"|"fact"|"mod"
logical_operator "&&"|"||"|"&"|"|"
parenthesis "["|"]"|"("|")"
integer (-|+)?[0-9]+
doshomik [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+
double [+-]?[0-9]+[.][0-9]+{6,12}|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+{6,12}
okkhor [A-Za-z]+
single_line_comment [/][/].*
multiple_line_comment [ ]*[/][*][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[*][/]


%%


{single_line_comment} {
	printf("single line comment\n");

}
{multiple_line_comment} {
	printf("multiple_line_comment\n");
}

"inc"   {return INC;}
"dec"	{return DEC;}
"log"	{return LOG;}
"log10"	{return LOG10;}
"sin"	{return SIN;}
"cos"	{return COS;}
"tan"	{return TAN;}
"!#"	{return not;}
"["	 { return LB; }
"]"	  { return RB; }
"javag"    {   return BREAK;     }
"check"      { return CASE;      }
"shift"      { return SWITCH;	}
"milenai"     {  return DEFAULT; 	}
"choltethako" { return WHILE;}
"purno"	{ return INT; }
"doshomik"	{ return FLOAT; }
"double"	{return DOUBLE;}
"okkhor"	{ return CHAR; }
"::"     { return COL;}
[0-9]+	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
"jonno"   { return FOR;}	
"("	{ return LP; }
")"	{ return RP; }
","	{ return CM; }
"#"	{ return SM; }
"pl"	{ return PLUS;}
"mi"	{ return MINUS; }
"gun"	{ return MULT; }
"vag"	{ return DIV; }
"^"	{ return POW; }
"or"	{ return OR; }
"oror"	{ return OROR; }
"and"	{ return AND; }
"andand"	{ return ANDAND; }
"mod" {return MOD;}
"fact"	{ return FACT; }
":"		{ return ASSIGN;  }
"@"	{ return GT; }
"$"	{ return LT; }

"losagu" {return LOSAGU; }
"gosagu" {return GOSAGU; }
{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}

"Agar"		{ return IF;}
"Nehito"		{ return ELSE;}
"Phirbhi"	{ return ELIF; }

"function "[A-Za-z]+	{ return FUNCTION; }
"func "[A-Za-z]+	{return funct;}

[ \t\n]*	

.	{
		yyerror("Unknown Character.\n");
	}
%%



int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
	
}

