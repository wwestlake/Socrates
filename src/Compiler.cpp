
#include <iostream>
#include "Compiler.hpp"
#include "soc_driver.hpp"


int Compiler::run() 
{
    int exit_code = 0;
    SOC::SOC_Driver driver;

    for (auto fn : _options.input_files)
    {
        std::cout << "Parsing " << fn << std::endl;
        driver.parse(fn.c_str());
    }



    // call the parser and get back an AST

    // run the code generator on the AST and get back the generated code

    // run some optimizers on the code

    // generate: byte code or assembly based on options

    // or

    // run the byte code based on options


    return exit_code;
}
