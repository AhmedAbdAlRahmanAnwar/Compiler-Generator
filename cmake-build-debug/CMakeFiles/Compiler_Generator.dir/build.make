# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ahmed/Programs/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ahmed/Programs/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ahmed/CLionProjects/Compiler-Generator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Compiler_Generator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Compiler_Generator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Compiler_Generator.dir/flags.make

CMakeFiles/Compiler_Generator.dir/main.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Compiler_Generator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/main.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/main.cpp

CMakeFiles/Compiler_Generator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/main.cpp > CMakeFiles/Compiler_Generator.dir/main.cpp.i

CMakeFiles/Compiler_Generator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/main.cpp -o CMakeFiles/Compiler_Generator.dir/main.cpp.s

CMakeFiles/Compiler_Generator.dir/Parser.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/Parser.cpp.o: ../Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Compiler_Generator.dir/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/Parser.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/Parser.cpp

CMakeFiles/Compiler_Generator.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/Parser.cpp > CMakeFiles/Compiler_Generator.dir/Parser.cpp.i

CMakeFiles/Compiler_Generator.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/Parser.cpp -o CMakeFiles/Compiler_Generator.dir/Parser.cpp.s

CMakeFiles/Compiler_Generator.dir/Rule.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/Rule.cpp.o: ../Rule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Compiler_Generator.dir/Rule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/Rule.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/Rule.cpp

CMakeFiles/Compiler_Generator.dir/Rule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/Rule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/Rule.cpp > CMakeFiles/Compiler_Generator.dir/Rule.cpp.i

CMakeFiles/Compiler_Generator.dir/Rule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/Rule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/Rule.cpp -o CMakeFiles/Compiler_Generator.dir/Rule.cpp.s

CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o: ../LexicalAnalyzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/LexicalAnalyzer.cpp

CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/LexicalAnalyzer.cpp > CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.i

CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/LexicalAnalyzer.cpp -o CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.s

CMakeFiles/Compiler_Generator.dir/Token.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/Token.cpp.o: ../Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Compiler_Generator.dir/Token.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/Token.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/Token.cpp

CMakeFiles/Compiler_Generator.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/Token.cpp > CMakeFiles/Compiler_Generator.dir/Token.cpp.i

CMakeFiles/Compiler_Generator.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/Token.cpp -o CMakeFiles/Compiler_Generator.dir/Token.cpp.s

CMakeFiles/Compiler_Generator.dir/DFA.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/DFA.cpp.o: ../DFA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Compiler_Generator.dir/DFA.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/DFA.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/DFA.cpp

CMakeFiles/Compiler_Generator.dir/DFA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/DFA.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/DFA.cpp > CMakeFiles/Compiler_Generator.dir/DFA.cpp.i

CMakeFiles/Compiler_Generator.dir/DFA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/DFA.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/DFA.cpp -o CMakeFiles/Compiler_Generator.dir/DFA.cpp.s

CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o: ../SrcLine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/SrcLine.cpp

CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/SrcLine.cpp > CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.i

CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/SrcLine.cpp -o CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.s

CMakeFiles/Compiler_Generator.dir/NFA.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/NFA.cpp.o: ../NFA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Compiler_Generator.dir/NFA.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/NFA.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/NFA.cpp

CMakeFiles/Compiler_Generator.dir/NFA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/NFA.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/NFA.cpp > CMakeFiles/Compiler_Generator.dir/NFA.cpp.i

CMakeFiles/Compiler_Generator.dir/NFA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/NFA.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/NFA.cpp -o CMakeFiles/Compiler_Generator.dir/NFA.cpp.s

CMakeFiles/Compiler_Generator.dir/State.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Compiler_Generator.dir/State.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/State.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/State.cpp

CMakeFiles/Compiler_Generator.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/State.cpp > CMakeFiles/Compiler_Generator.dir/State.cpp.i

CMakeFiles/Compiler_Generator.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/State.cpp -o CMakeFiles/Compiler_Generator.dir/State.cpp.s

CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o: ../NFACreator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/NFACreator.cpp

CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/NFACreator.cpp > CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.i

CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/NFACreator.cpp -o CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.s

CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o: CMakeFiles/Compiler_Generator.dir/flags.make
CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o: ../BasicNFA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o -c /home/ahmed/CLionProjects/Compiler-Generator/BasicNFA.cpp

CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmed/CLionProjects/Compiler-Generator/BasicNFA.cpp > CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.i

CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmed/CLionProjects/Compiler-Generator/BasicNFA.cpp -o CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.s

# Object files for target Compiler_Generator
Compiler_Generator_OBJECTS = \
"CMakeFiles/Compiler_Generator.dir/main.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/Parser.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/Rule.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/Token.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/DFA.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/NFA.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/State.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o" \
"CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o"

# External object files for target Compiler_Generator
Compiler_Generator_EXTERNAL_OBJECTS =

Compiler_Generator: CMakeFiles/Compiler_Generator.dir/main.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/Parser.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/Rule.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/LexicalAnalyzer.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/Token.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/DFA.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/SrcLine.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/NFA.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/State.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/NFACreator.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/BasicNFA.cpp.o
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/build.make
Compiler_Generator: CMakeFiles/Compiler_Generator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Compiler_Generator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Compiler_Generator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Compiler_Generator.dir/build: Compiler_Generator

.PHONY : CMakeFiles/Compiler_Generator.dir/build

CMakeFiles/Compiler_Generator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Compiler_Generator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Compiler_Generator.dir/clean

CMakeFiles/Compiler_Generator.dir/depend:
	cd /home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahmed/CLionProjects/Compiler-Generator /home/ahmed/CLionProjects/Compiler-Generator /home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug /home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug /home/ahmed/CLionProjects/Compiler-Generator/cmake-build-debug/CMakeFiles/Compiler_Generator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Compiler_Generator.dir/depend

