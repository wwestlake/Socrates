#ifndef __SOC_DRIVER_HPP
#define __SOC_DRIVER_HPP

#include <string>
#include <cstddef>
#include <istream>


//#include "SocratesAST.hpp"
#include "soc_scanner.hpp"
#include "soc_parser.tab.hh"

namespace SOC {


class SOC_Driver {
public:
    SOC_Driver() = default;

    virtual ~SOC_Driver();

    void parse( const char * const filename );
    void parse( std::istream& iss);

private:
   void parse_helper( std::istream &stream );
   SOC::SOC_Parser  *parser  = nullptr;
   SOC::SOC_Scanner *scanner = nullptr;
 


};

} // end namespace SOC



#endif // __SOC_DRIVER_HPP