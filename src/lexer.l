%{
    #include <string>
    #include <iostream>

    #include "soc_scanner.hpp"
    #undef YY_DECL
    #define YY_DECL int SOC::SOC_Scanner::yylex( SOC::SOC_Parser::semantic_type * const lval, SOC::SOC_Parser::location_type *loc)

    using token = SOC::SOC_Parser::token;

    /* define yyterminate as this instead of NULL */
    #define yyterminate() return( token::END )

    /* msvc2010 requires that we exclude this header file. */
    #define YY_NO_UNISTD_H

    /* update location on matching */
    #define YY_USER_ACTION loc->step(); loc->columns(yyleng);
 
%}

%option debug
%option nodefault
%option yyclass="SOC::SOC_Scanner"
%option noyywrap
%option c++


HEX "0"[xX][0-9A-Fa-f]+
OCT "0"[oO][0-7]+
BIN "0"[bB][0-1]+
EOL [\n\r]
STR ["]([^"]|\\(.|\n))*["]
CHR "'"."'"
FLT [0-9]+\.[0-9]*(([e|E][+|-]?)[0-9]+)?
INT [0-9]+
SYM [a-zA-Z_]+[a-zA-Z0-9_]*
BOOL "true"|"false"
OP [+\-/*&\\\|!@%^<>=]+
IDENT [a-zA-Z_]+[a-zA-Z0-9_]*

%%
%{          /** Code executed at the beginning of yylex **/
            yylval = lval;
%}

[ \n\t\r]+ {}

{OP}        { 
                yylval->build< std::string >( yytext ); 
                return token::OP;
            }

{IDENT}     {
                yylval->build< std::string >( yytext );
                return token::IDENT;
            }


"module"    {
                return token::MODULE;
            }

";"         { return token::SEMICOLON; }
"{"         { return token::OBRACE; } 
"}"         { return token::CBRACE; } 

{FLT}       {  
                yylval->build< float >( std::atof(yytext) );
                return token::FLT;
            }

%%


