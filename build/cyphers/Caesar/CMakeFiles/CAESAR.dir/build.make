# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/serhii/projects/CppTest/Crypto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/serhii/projects/CppTest/Crypto/build

# Include any dependencies generated for this target.
include cyphers/Caesar/CMakeFiles/CAESAR.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include cyphers/Caesar/CMakeFiles/CAESAR.dir/compiler_depend.make

# Include the progress variables for this target.
include cyphers/Caesar/CMakeFiles/CAESAR.dir/progress.make

# Include the compile flags for this target's objects.
include cyphers/Caesar/CMakeFiles/CAESAR.dir/flags.make

cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o: cyphers/Caesar/CMakeFiles/CAESAR.dir/flags.make
cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o: ../cyphers/Caesar/caesar.cpp
cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o: cyphers/Caesar/CMakeFiles/CAESAR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serhii/projects/CppTest/Crypto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o"
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o -MF CMakeFiles/CAESAR.dir/caesar.cpp.o.d -o CMakeFiles/CAESAR.dir/caesar.cpp.o -c /home/serhii/projects/CppTest/Crypto/cyphers/Caesar/caesar.cpp

cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CAESAR.dir/caesar.cpp.i"
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serhii/projects/CppTest/Crypto/cyphers/Caesar/caesar.cpp > CMakeFiles/CAESAR.dir/caesar.cpp.i

cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CAESAR.dir/caesar.cpp.s"
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serhii/projects/CppTest/Crypto/cyphers/Caesar/caesar.cpp -o CMakeFiles/CAESAR.dir/caesar.cpp.s

# Object files for target CAESAR
CAESAR_OBJECTS = \
"CMakeFiles/CAESAR.dir/caesar.cpp.o"

# External object files for target CAESAR
CAESAR_EXTERNAL_OBJECTS =

cyphers/Caesar/libCAESAR.a: cyphers/Caesar/CMakeFiles/CAESAR.dir/caesar.cpp.o
cyphers/Caesar/libCAESAR.a: cyphers/Caesar/CMakeFiles/CAESAR.dir/build.make
cyphers/Caesar/libCAESAR.a: cyphers/Caesar/CMakeFiles/CAESAR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serhii/projects/CppTest/Crypto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libCAESAR.a"
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && $(CMAKE_COMMAND) -P CMakeFiles/CAESAR.dir/cmake_clean_target.cmake
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CAESAR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cyphers/Caesar/CMakeFiles/CAESAR.dir/build: cyphers/Caesar/libCAESAR.a
.PHONY : cyphers/Caesar/CMakeFiles/CAESAR.dir/build

cyphers/Caesar/CMakeFiles/CAESAR.dir/clean:
	cd /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar && $(CMAKE_COMMAND) -P CMakeFiles/CAESAR.dir/cmake_clean.cmake
.PHONY : cyphers/Caesar/CMakeFiles/CAESAR.dir/clean

cyphers/Caesar/CMakeFiles/CAESAR.dir/depend:
	cd /home/serhii/projects/CppTest/Crypto/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serhii/projects/CppTest/Crypto /home/serhii/projects/CppTest/Crypto/cyphers/Caesar /home/serhii/projects/CppTest/Crypto/build /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar /home/serhii/projects/CppTest/Crypto/build/cyphers/Caesar/CMakeFiles/CAESAR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cyphers/Caesar/CMakeFiles/CAESAR.dir/depend

