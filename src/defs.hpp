#ifndef __DEFS_HPP
#define __DEFS_HPP

#include <string>
#include <vector>

#define VERSION "0.0.1"


struct Options {

    int debug_level;
    std::vector<std::string> include_path;
    std::vector<std::string> input_files;

};





#endif // __DEFS_HPP