%skeleton "lalr1.cc"
%require  "3.2"
%debug 
%defines 
%language "c++"
%define api.namespace {SOC}
%define api.parser.class {SOC_Parser}
%define api.value.type variant
%define parse.assert
%define api.value.automove
%locations



%code requires{

   #include <memory>
   #include <string>
   #include <utility>
   #include <vector>
   #include "SocratesAST.hpp"

   namespace SOC {
      class SOC_Driver;
      class SOC_Scanner;
   }

   using exp_ast = std::unique_ptr<ExprAST>;

// The following definitions is missing when %locations isn't used
# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

}

%parse-param { SOC_Scanner  &scanner  }
%parse-param { SOC_Driver  &driver  }

%code{
   #include <iostream>
   #include <cstdlib>
   #include <fstream>
   #include <string>
   #include <utility>
   #include <vector>

   /* include for all driver functions */
   #include "soc_driver.hpp"


   #undef yylex
   #define yylex scanner.yylex
}


%token               END    0     "end of file"
%token <std::string> OP
%token               MODULE
%token <std::string> IDENT
%token SEMICOLON OBRACE CBRACE
%token <float> FLT

%type<exp_ast> expression


%%

program:
    /* empty */
    | expression
    | program expression
    ;

module_code:
    /* empty */
    | expression
    | module_code expression
    ;

expression:
    FLT                          { 
                                    $$ = MakeNumberExpr($1); 
                                 }; 
    | expression OP expression   { 
                                    $$ = MakeBinaryExpr($2, std::move($1), std::move($3)); 
                                 }
    ;

%%

void 
SOC::SOC_Parser::error( const location_type &l, const std::string &err_message )
{
   std::cerr << "Error: " << err_message << " at " << l << "\n";
}





