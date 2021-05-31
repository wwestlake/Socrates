#ifndef __COMPILER_HPP
#define __COMPILER_HPP

#include "defs.hpp"

class Compiler {
    Options _options;


public:
    Compiler(Options options) : _options(options) {}

    int run();


};



#endif // __COMPILER_HPP