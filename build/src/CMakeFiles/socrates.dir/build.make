# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/876/bin/cmake

# The command to remove a file.
RM = /snap/cmake/876/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wwestlake/devel/Socraates-Prep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wwestlake/devel/Socraates-Prep/build

# Include any dependencies generated for this target.
include src/CMakeFiles/socrates.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/socrates.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/socrates.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/socrates.dir/flags.make

src/soc_parser.tab.cc: ../src/parser.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][SocratesParser] Building parser with bison 3.5.1"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/bison -d -o /home/wwestlake/devel/Socraates-Prep/build/src/soc_parser.tab.cc /home/wwestlake/devel/Socraates-Prep/src/parser.y

src/soc_parser.tab.hh: src/soc_parser.tab.cc
	@$(CMAKE_COMMAND) -E touch_nocreate src/soc_parser.tab.hh

src/soc_lexer.yy.cc: ../src/lexer.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][SocratesScanner] Building scanner with flex 2.6.4"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/flex -o/home/wwestlake/devel/Socraates-Prep/build/src/soc_lexer.yy.cc /home/wwestlake/devel/Socraates-Prep/src/lexer.l

src/CMakeFiles/socrates.dir/main.cpp.o: src/CMakeFiles/socrates.dir/flags.make
src/CMakeFiles/socrates.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/socrates.dir/main.cpp.o: src/CMakeFiles/socrates.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/socrates.dir/main.cpp.o"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/socrates.dir/main.cpp.o -MF CMakeFiles/socrates.dir/main.cpp.o.d -o CMakeFiles/socrates.dir/main.cpp.o -c /home/wwestlake/devel/Socraates-Prep/src/main.cpp

src/CMakeFiles/socrates.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socrates.dir/main.cpp.i"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wwestlake/devel/Socraates-Prep/src/main.cpp > CMakeFiles/socrates.dir/main.cpp.i

src/CMakeFiles/socrates.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socrates.dir/main.cpp.s"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wwestlake/devel/Socraates-Prep/src/main.cpp -o CMakeFiles/socrates.dir/main.cpp.s

src/CMakeFiles/socrates.dir/Compiler.cpp.o: src/CMakeFiles/socrates.dir/flags.make
src/CMakeFiles/socrates.dir/Compiler.cpp.o: ../src/Compiler.cpp
src/CMakeFiles/socrates.dir/Compiler.cpp.o: src/CMakeFiles/socrates.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/socrates.dir/Compiler.cpp.o"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/socrates.dir/Compiler.cpp.o -MF CMakeFiles/socrates.dir/Compiler.cpp.o.d -o CMakeFiles/socrates.dir/Compiler.cpp.o -c /home/wwestlake/devel/Socraates-Prep/src/Compiler.cpp

src/CMakeFiles/socrates.dir/Compiler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socrates.dir/Compiler.cpp.i"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wwestlake/devel/Socraates-Prep/src/Compiler.cpp > CMakeFiles/socrates.dir/Compiler.cpp.i

src/CMakeFiles/socrates.dir/Compiler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socrates.dir/Compiler.cpp.s"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wwestlake/devel/Socraates-Prep/src/Compiler.cpp -o CMakeFiles/socrates.dir/Compiler.cpp.s

src/CMakeFiles/socrates.dir/soc_driver.cpp.o: src/CMakeFiles/socrates.dir/flags.make
src/CMakeFiles/socrates.dir/soc_driver.cpp.o: ../src/soc_driver.cpp
src/CMakeFiles/socrates.dir/soc_driver.cpp.o: src/CMakeFiles/socrates.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/socrates.dir/soc_driver.cpp.o"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/socrates.dir/soc_driver.cpp.o -MF CMakeFiles/socrates.dir/soc_driver.cpp.o.d -o CMakeFiles/socrates.dir/soc_driver.cpp.o -c /home/wwestlake/devel/Socraates-Prep/src/soc_driver.cpp

src/CMakeFiles/socrates.dir/soc_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socrates.dir/soc_driver.cpp.i"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wwestlake/devel/Socraates-Prep/src/soc_driver.cpp > CMakeFiles/socrates.dir/soc_driver.cpp.i

src/CMakeFiles/socrates.dir/soc_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socrates.dir/soc_driver.cpp.s"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wwestlake/devel/Socraates-Prep/src/soc_driver.cpp -o CMakeFiles/socrates.dir/soc_driver.cpp.s

src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o: src/CMakeFiles/socrates.dir/flags.make
src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o: src/soc_parser.tab.cc
src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o: src/CMakeFiles/socrates.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o -MF CMakeFiles/socrates.dir/soc_parser.tab.cc.o.d -o CMakeFiles/socrates.dir/soc_parser.tab.cc.o -c /home/wwestlake/devel/Socraates-Prep/build/src/soc_parser.tab.cc

src/CMakeFiles/socrates.dir/soc_parser.tab.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socrates.dir/soc_parser.tab.cc.i"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wwestlake/devel/Socraates-Prep/build/src/soc_parser.tab.cc > CMakeFiles/socrates.dir/soc_parser.tab.cc.i

src/CMakeFiles/socrates.dir/soc_parser.tab.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socrates.dir/soc_parser.tab.cc.s"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wwestlake/devel/Socraates-Prep/build/src/soc_parser.tab.cc -o CMakeFiles/socrates.dir/soc_parser.tab.cc.s

src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o: src/CMakeFiles/socrates.dir/flags.make
src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o: src/soc_lexer.yy.cc
src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o: src/soc_parser.tab.hh
src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o: src/CMakeFiles/socrates.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o -MF CMakeFiles/socrates.dir/soc_lexer.yy.cc.o.d -o CMakeFiles/socrates.dir/soc_lexer.yy.cc.o -c /home/wwestlake/devel/Socraates-Prep/build/src/soc_lexer.yy.cc

src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socrates.dir/soc_lexer.yy.cc.i"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wwestlake/devel/Socraates-Prep/build/src/soc_lexer.yy.cc > CMakeFiles/socrates.dir/soc_lexer.yy.cc.i

src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socrates.dir/soc_lexer.yy.cc.s"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wwestlake/devel/Socraates-Prep/build/src/soc_lexer.yy.cc -o CMakeFiles/socrates.dir/soc_lexer.yy.cc.s

# Object files for target socrates
socrates_OBJECTS = \
"CMakeFiles/socrates.dir/main.cpp.o" \
"CMakeFiles/socrates.dir/Compiler.cpp.o" \
"CMakeFiles/socrates.dir/soc_driver.cpp.o" \
"CMakeFiles/socrates.dir/soc_parser.tab.cc.o" \
"CMakeFiles/socrates.dir/soc_lexer.yy.cc.o"

# External object files for target socrates
socrates_EXTERNAL_OBJECTS =

src/socrates: src/CMakeFiles/socrates.dir/main.cpp.o
src/socrates: src/CMakeFiles/socrates.dir/Compiler.cpp.o
src/socrates: src/CMakeFiles/socrates.dir/soc_driver.cpp.o
src/socrates: src/CMakeFiles/socrates.dir/soc_parser.tab.cc.o
src/socrates: src/CMakeFiles/socrates.dir/soc_lexer.yy.cc.o
src/socrates: src/CMakeFiles/socrates.dir/build.make
src/socrates: /usr/local/lib/libboost_date_time.so.1.73.0
src/socrates: /usr/local/lib/libboost_filesystem.so.1.73.0
src/socrates: /usr/local/lib/libboost_system.so.1.73.0
src/socrates: /usr/local/lib/libboost_program_options.so.1.73.0
src/socrates: src/CMakeFiles/socrates.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wwestlake/devel/Socraates-Prep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable socrates"
	cd /home/wwestlake/devel/Socraates-Prep/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/socrates.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/socrates.dir/build: src/socrates
.PHONY : src/CMakeFiles/socrates.dir/build

src/CMakeFiles/socrates.dir/clean:
	cd /home/wwestlake/devel/Socraates-Prep/build/src && $(CMAKE_COMMAND) -P CMakeFiles/socrates.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/socrates.dir/clean

src/CMakeFiles/socrates.dir/depend: src/soc_lexer.yy.cc
src/CMakeFiles/socrates.dir/depend: src/soc_parser.tab.cc
src/CMakeFiles/socrates.dir/depend: src/soc_parser.tab.hh
	cd /home/wwestlake/devel/Socraates-Prep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wwestlake/devel/Socraates-Prep /home/wwestlake/devel/Socraates-Prep/src /home/wwestlake/devel/Socraates-Prep/build /home/wwestlake/devel/Socraates-Prep/build/src /home/wwestlake/devel/Socraates-Prep/build/src/CMakeFiles/socrates.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/socrates.dir/depend

