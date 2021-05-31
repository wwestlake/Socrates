#ifndef __SOCSCANNER_HPP__
#define __SOCSCANNER_HPP__ 1

#if ! defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include <memory>

#include "soc_parser.tab.hh"
#include "location.hh"

namespace SOC {



class SOC_Scanner : public yyFlexLexer{
public:
   
   SOC_Scanner(std::istream *in) : yyFlexLexer(in)
   {
   };
   virtual ~SOC_Scanner() {
   };

   //get rid of override virtual function warning
   using FlexLexer::yylex;

   virtual
   int yylex( SOC::SOC_Parser::semantic_type * const lval, 
              SOC::SOC_Parser::location_type *location );
   // YY_DECL defined in mc_lexer.l
   // Method body created by flex in mc_lexer.yy.cc


private:
   /* yyval ptr */
   SOC::SOC_Parser::semantic_type *yylval = nullptr;
};

} /* end namespace MC */

#endif /* END __SOCSCANNER_HPP__ */
