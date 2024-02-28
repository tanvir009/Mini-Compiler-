/* author: @MD TASNIN TANVIR (1807009) */

%{
	#include<stdio.h>
	#include <math.h>
	#include<stdlib.h>
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);

	#define pi  3.1416
	
%}
%union 
{
        int number;
        char *string;
}

%token <number> NUM
%token <string> VAR 
%token <string> IF ELIF ELSE FUNCTION INT FLOAT DOUBLE CHAR LP RP LB RB CM SM PLUS MINUS MULT DIV POW OR OROR AND ANDAND MOD FACT ASSIGN FOR COL WHILE BREAK COLON DEFAULT CASE SWITCH INC DEC LOG LOG10 SIN COS TAN LOSAGU GOSAGU not funct
%type <string> statement
%type <number> expression
%type <number> switch_expression
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LT GT
%left PLUS MINUS
%left MULT DIV
%left FACT
%left INC
%left DEC
%right LOG
%right LOG10
%left SIN
%left COS
%left TAN
%left LOSAGU
%left GOSAGU
%left POW
%left OR
%left OROR
%left AND
%left ANDAND
%left MOD


%%

program: FUNCTION LP RP LB cstatement RB { printf("\nSuccessful compilation\n"); }
	 ;

cstatement: 

	| cstatement statement
	
	| cdeclaration
	;

cdeclaration:	TYPE ID1 SM	{ printf("\nvalid declaration\n"); }
   
			;
			
TYPE : INT

     | FLOAT

     | CHAR
     ;

ID1  : ID1 CM VAR	{
						if(number_for_key($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							insert(&store[cnt],$3, cnt);
							cnt++;
							
						}
			}

     |VAR	{
				if(number_for_key($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					insert(&store[cnt],$1, cnt);
							cnt++;
				}
			}
     ;

	
statement: SM
	| SWITCH LP switch_expression RP LB BASE RB    {printf("SWITCH case.\n");} 
	
	

	| expression SM 			{ printf("\nvalue of expression: %d\n", ($1)); }

        | VAR ASSIGN expression SM 		{
							if(number_for_key($1)){
								int i = number_for_key2($1);
								if (!i){
									insert(&sym[cntt], $1, $3);
									cntt++;
								}
								sym[i].n = $3;
								printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
							
						}

	| IF LP expression RP LB expression SM RB %prec IFX {
								if($3)
								{
									printf("\nvalue of expression in IF: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF LP expression RP LB expression SM RB ELSE LB expression SM RB {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$11);
									}
								   }
	| IF LP expression RP LB IF LP expression RP LB expression SM RB ELSE LB expression SM RB expression SM RB ELSE LB expression SM RB %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle IF: %d\n",$11);
										else
											printf("\nvalue of expression middle ELSE: %d\n",$16);
										printf("\nvalue of expression in first IF: %d\n",$19);
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",$24);
									}
								   }
	| IF LP expression RP LB expression SM RB ELIF LP expression RP LB expression SM RB ELSE LB expression SM RB {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else if($11)
									{
										printf("\nvalue of expression in ELIF: %d\n",$14);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$19);
									}
								   }							   
	| FOR LP NUM COL NUM RP LB expression RB     {
	   int i=0;
	   for(i=$3;i<$5;i++){
	   printf("for loop statement\n");
	   }
	}
	| WHILE LP NUM GT NUM RP LB expression RB   {
										int i;
										printf("While LOOP: ");
										for(i=$3;i<=$5;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}


	| funct func
	;

			func : COL TYPE LP RP LB statement RB
							{
								printf("Function Declared\n");
							}
				;



	
			BASE : Bas   
				 | Bas Dflt 
				 ;

			Bas   : /*NULL*/
				 | Bas Cs     
				 ;

			Cs    : CASE NUM COL expression SM   {
						
						if(val==$2){
							  track=1;
							  printf("\nCase No : %d  and Result :  %d\n",$2,$4);
						}
					}
				 ;

			Dflt    : DEFAULT COL expression SM    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",$3);
						}
						track=0;
					}
				 ;    
	
	
	
expression: NUM				{ $$ = $1; 	}

	| VAR				{ $$ = number_for_key2($1); printf("Variable value: %d",$$)}

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }
	
	| expression OR expression { $$ = $1 | $3 ; }
	
	| expression OROR expression { $$ = $1 || $3 ; }
	
	| expression AND expression { $$ = $1 & $3 ; }
	
	| expression ANDAND expression { $$ = $1 && $3 ; }
	
	

	| expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						
					 }	

	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }
	
	| expression MOD expression	{ $$ = $1 % $3; }

	| LP expression RP		{ $$ = $2;	}
	
	| expression INC        { $$=$1+1; printf("inc: %d\n",$$);}

	| expression DEC        { $$=$1-1; printf("dec: %d\n",$$);}
	
	| LOG expression        { $$=log($2); printf("log: %lf\n",log($2));}
	
	| LOG10 expression        { $$=log($2); printf("log10: %lf\n",log10($2));}
	
	| SIN expression        { $$=sin($2*3.1416/180); printf("sin: %lf\n",sin($2*3.1416/180));}
	
	| COS expression        { $$=cos($2*3.1416/180); printf("cos: %lf\n",cos($2*3.1416/180));}
	
	| TAN expression        { $$=tan($2*3.1416/180); printf("tan: %lf\n",tan($2*3.1416/180));}
	
	| LOSAGU expression expression  { 
									int n1, n2 , i, gcd;
									n1 = $2; n2 = $3;
									for(i=1; i <= n1 && i <= n2; ++i)
									{
									if(n1%i==0 && n2%i==0)
										gcd = i;
									}

									printf("G.C.D of %d and %d is %d", n1, n2, gcd);
									$$ = gcd;
									}
									
	| GOSAGU expression expression  { 
									int n1, n2 , i, max;
									n1 = $2; n2 = $3;
									max = (n1 > n2) ? n1 : n2;

									while (1) {
										if ((max % n1 == 0) && (max % n2 == 0)) {
										printf("L.C.M. of %d and %d is %d.", n1, n2, max);
										$$ = max;
										break;}
									++max;
									} }
	
	| not expression not {
						if($2 != 0)
						{
							$$ = 0; printf("not: %d\n",$$);
						}
						else{
							$$ = 1 ; printf("aff: %d\n",$$);
						}
					}
	;



switch_expression: NUM				{ $$ = $1; val = $$;	}

	| VAR				{ $$ = number_for_key2($1); val = $$;}

	| switch_expression PLUS switch_expression	{ $$ = $1 + $3; val = $$; }

	| switch_expression MINUS switch_expression	{ $$ = $1 - $3; val = $$; }

	| switch_expression MULT switch_expression	{ $$ = $1 * $3;  val = $$;}

	| switch_expression DIV switch_expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3; val = $$;
				  		}
				  		else
				  		{
							$$ = 0;
							 val = $$;
				  		} 	
				    	}
	| switch_expression POW switch_expression { $$ = pow($1,$3);  val = $$;}
	

	| switch_expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult; val = $$;
						
					 }	

	| switch_expression LT switch_expression	{ $$ = $1 < $3; val = $$; }

	| switch_expression GT switch_expression	{ $$ = $1 > $3;  val = $$;}

	| LP switch_expression RP		{ $$ = $2;	 val = $$;}
	
	| switch_expression INC        { $$=$1+1; printf("inc: %d\n",$$); val = $$;}

	| switch_expression DEC       { $$=$1-1; printf("dec: %d\n",$$); val = $$;}

	| not switch_expression not {
						if($2 != 0)
						{
							$$ = 0; val = $$;
						}
						else{
							$$ = 1 ; val = $$;
						}
					}
	;
%%

void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}



int number_for_key2(char *key)
{
    int i = 1;
    char *name = sym[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = sym[++i].str;
    }
    return 0;
}




int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

