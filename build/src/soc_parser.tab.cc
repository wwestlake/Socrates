// A Bison parser, made by GNU Bison 3.5.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "soc_parser.tab.hh"


// Unqualified %code blocks.
#line 44 "/home/wwestlake/devel/Socrates/src/parser.y"

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

#line 61 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "/home/wwestlake/devel/Socrates/src/parser.y"
namespace SOC {
#line 153 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"


  /// Build a parser object.
  SOC_Parser::SOC_Parser (SOC_Scanner  &scanner_yyarg, SOC_Driver  &driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

  SOC_Parser::~SOC_Parser ()
  {}

  SOC_Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  SOC_Parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 12: // expression
        value.move< exp_ast > (std::move (that.value));
        break;

      case 9: // FLT
        value.move< float > (std::move (that.value));
        break;

      case 3: // OP
      case 5: // IDENT
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  SOC_Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 12: // expression
        value.copy< exp_ast > (YY_MOVE (that.value));
        break;

      case 9: // FLT
        value.copy< float > (YY_MOVE (that.value));
        break;

      case 3: // OP
      case 5: // IDENT
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  SOC_Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  SOC_Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 12: // expression
        value.move< exp_ast > (YY_MOVE (s.value));
        break;

      case 9: // FLT
        value.move< float > (YY_MOVE (s.value));
        break;

      case 3: // OP
      case 5: // IDENT
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  SOC_Parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  SOC_Parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  SOC_Parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  SOC_Parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  SOC_Parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  SOC_Parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  SOC_Parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  SOC_Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  SOC_Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  SOC_Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  SOC_Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  SOC_Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  SOC_Parser::symbol_number_type
  SOC_Parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  SOC_Parser::stack_symbol_type::stack_symbol_type ()
  {}

  SOC_Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 12: // expression
        value.YY_MOVE_OR_COPY< exp_ast > (YY_MOVE (that.value));
        break;

      case 9: // FLT
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case 3: // OP
      case 5: // IDENT
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  SOC_Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 12: // expression
        value.move< exp_ast > (YY_MOVE (that.value));
        break;

      case 9: // FLT
        value.move< float > (YY_MOVE (that.value));
        break;

      case 3: // OP
      case 5: // IDENT
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  SOC_Parser::stack_symbol_type&
  SOC_Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 12: // expression
        value.copy< exp_ast > (that.value);
        break;

      case 9: // FLT
        value.copy< float > (that.value);
        break;

      case 3: // OP
      case 5: // IDENT
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  SOC_Parser::stack_symbol_type&
  SOC_Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 12: // expression
        value.move< exp_ast > (that.value);
        break;

      case 9: // FLT
        value.move< float > (that.value);
        break;

      case 3: // OP
      case 5: // IDENT
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  SOC_Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  SOC_Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  SOC_Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  SOC_Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  SOC_Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  SOC_Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  SOC_Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  SOC_Parser::debug_level_type
  SOC_Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  SOC_Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  SOC_Parser::state_type
  SOC_Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  SOC_Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  SOC_Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  SOC_Parser::operator() ()
  {
    return parse ();
  }

  int
  SOC_Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 12: // expression
        yylhs.value.emplace< exp_ast > ();
        break;

      case 9: // FLT
        yylhs.value.emplace< float > ();
        break;

      case 3: // OP
      case 5: // IDENT
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 5:
#line 86 "/home/wwestlake/devel/Socrates/src/parser.y"
                                 { 
                                    yylhs.value.as < exp_ast > () = MakeNumberExpr(YY_MOVE (yystack_[0].value.as < float > ())); 
                                 }
#line 738 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"
    break;

  case 6:
#line 89 "/home/wwestlake/devel/Socrates/src/parser.y"
                                 { 
                                    yylhs.value.as < exp_ast > () = MakeBinaryExpr(YY_MOVE (yystack_[1].value.as < std::string > ()), std::move(YY_MOVE (yystack_[2].value.as < exp_ast > ())), std::move(YY_MOVE (yystack_[0].value.as < exp_ast > ()))); 
                                 }
#line 746 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"
    break;


#line 750 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  SOC_Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  SOC_Parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char SOC_Parser::yypact_ninf_ = -8;

  const signed char SOC_Parser::yytable_ninf_ = -1;

  const signed char
  SOC_Parser::yypact_[] =
  {
      -7,    -8,     0,     1,    -8,     1,    -7,     1
  };

  const signed char
  SOC_Parser::yydefact_[] =
  {
       2,     5,     0,     3,     1,     4,     0,     6
  };

  const signed char
  SOC_Parser::yypgoto_[] =
  {
      -8,    -8,    -1
  };

  const signed char
  SOC_Parser::yydefgoto_[] =
  {
      -1,     2,     3
  };

  const signed char
  SOC_Parser::yytable_[] =
  {
       4,     5,     1,     0,     6,     7,     0,     0,     0,     1
  };

  const signed char
  SOC_Parser::yycheck_[] =
  {
       0,     2,     9,    -1,     3,     6,    -1,    -1,    -1,     9
  };

  const signed char
  SOC_Parser::yystos_[] =
  {
       0,     9,    11,    12,     0,    12,     3,    12
  };

  const signed char
  SOC_Parser::yyr1_[] =
  {
       0,    10,    11,    11,    11,    12,    12
  };

  const signed char
  SOC_Parser::yyr2_[] =
  {
       0,     2,     0,     1,     2,     1,     3
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const SOC_Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "OP", "MODULE", "IDENT",
  "SEMICOLON", "OBRACE", "CBRACE", "FLT", "$accept", "program",
  "expression", YY_NULLPTR
  };


  const signed char
  SOC_Parser::yyrline_[] =
  {
       0,    73,    73,    75,    76,    86,    89
  };

  // Print the state stack on the debug stream.
  void
  SOC_Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  SOC_Parser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  SOC_Parser::token_number_type
  SOC_Parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9
    };
    const int user_token_number_max_ = 264;

    if (t <= 0)
      return yyeof_;
    else if (t <= user_token_number_max_)
      return translate_table[t];
    else
      return yy_undef_token_;
  }

#line 6 "/home/wwestlake/devel/Socrates/src/parser.y"
} // SOC
#line 1086 "/home/wwestlake/devel/Socrates/build/src/soc_parser.tab.cc"

#line 94 "/home/wwestlake/devel/Socrates/src/parser.y"


void 
SOC::SOC_Parser::error( const location_type &l, const std::string &err_message )
{
   std::cerr << "Error: " << err_message << " at " << l << "\n";
}





