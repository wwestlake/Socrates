
#include <iostream>
#include <boost/program_options.hpp>
#include <optional>
#include <string>
#include <vector>
#include <sstream>
#include <memory>
#include <boost/program_options.hpp>

#include "defs.hpp"
#include "Compiler.hpp"
#include "SocratesAST.hpp"

namespace po = boost::program_options;

std::optional<std::string> process_options(int argc, char ** argv, Options& options)
{
    // Declare a group of options that will be 
    // allowed only on command line
    po::options_description generic("Generic options");
    generic.add_options()
        ("version,v", "print version string")
        ("help", "produce help message")    
        ;

    // Declare a group of options that will be 
    // allowed both on command line and in
    // config file
    po::options_description config("Configuration");
    config.add_options()
        ("debug", po::value<int>(&options.debug_level)->default_value(0), 
              "debug level")
        ("include-path,I", 
             po::value<std::vector<std::string> >()->composing(), 
             "include path")
        ;

    // Hidden options, will be allowed both on command line and
    // in config file, but will not be shown to the user.
    po::options_description hidden("Specifications");
    hidden.add_options()
        ("input-file,i", po::value<std::vector<std::string> >(), "input file")
        ;    


    po::options_description cmdline_options;
    cmdline_options.add(generic).add(config).add(hidden);

    po::options_description config_file_options;
    config_file_options.add(config).add(hidden);

    po::options_description visible("Allowed options");
    visible.add(generic).add(config);


    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, cmdline_options), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::stringstream ss;
        ss << cmdline_options;
        return ss.str();
    }

    if (vm.count("version")) {
        return VERSION;
    }

    if (vm.count("include-path"))
    {
        options.include_path = (vm["include-path"].as<std::vector<std::string>>());
    }

    if (vm.count("input-file"))
    {
        options.input_files = vm["input-file"].as<std::vector<std::string>>();
    } else {
        std::stringstream ss;
        ss << "ERROR\n";
        ss << "No input files specified, please include at\nleast one input file -i<input file name>\n\n";
        ss << cmdline_options;
        return ss.str();
    }

    return {};
}



int main(int argc, char ** argv)
{
    std::unique_ptr<int> test = std::make_unique<int>(3);
    int exit_code = 0;
    Options options;

    if (auto result = process_options(argc, argv, options))
    {
        std::cout << *result << std::endl;
        return exit_code;
    }

    Compiler compiler(options);
    exit_code = compiler.run();

    return exit_code;
}

