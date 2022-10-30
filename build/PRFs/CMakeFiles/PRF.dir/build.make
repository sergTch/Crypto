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
include PRFs/CMakeFiles/PRF.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include PRFs/CMakeFiles/PRF.dir/compiler_depend.make

# Include the progress variables for this target.
include PRFs/CMakeFiles/PRF.dir/progress.make

# Include the compile flags for this target's objects.
include PRFs/CMakeFiles/PRF.dir/flags.make

PRFs/CMakeFiles/PRF.dir/AES.cpp.o: PRFs/CMakeFiles/PRF.dir/flags.make
PRFs/CMakeFiles/PRF.dir/AES.cpp.o: ../PRFs/AES.cpp
PRFs/CMakeFiles/PRF.dir/AES.cpp.o: PRFs/CMakeFiles/PRF.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serhii/projects/CppTest/Crypto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object PRFs/CMakeFiles/PRF.dir/AES.cpp.o"
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT PRFs/CMakeFiles/PRF.dir/AES.cpp.o -MF CMakeFiles/PRF.dir/AES.cpp.o.d -o CMakeFiles/PRF.dir/AES.cpp.o -c /home/serhii/projects/CppTest/Crypto/PRFs/AES.cpp

PRFs/CMakeFiles/PRF.dir/AES.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRF.dir/AES.cpp.i"
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serhii/projects/CppTest/Crypto/PRFs/AES.cpp > CMakeFiles/PRF.dir/AES.cpp.i

PRFs/CMakeFiles/PRF.dir/AES.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRF.dir/AES.cpp.s"
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serhii/projects/CppTest/Crypto/PRFs/AES.cpp -o CMakeFiles/PRF.dir/AES.cpp.s

# Object files for target PRF
PRF_OBJECTS = \
"CMakeFiles/PRF.dir/AES.cpp.o"

# External object files for target PRF
PRF_EXTERNAL_OBJECTS =

PRFs/libPRF.a: PRFs/CMakeFiles/PRF.dir/AES.cpp.o
PRFs/libPRF.a: PRFs/CMakeFiles/PRF.dir/build.make
PRFs/libPRF.a: PRFs/CMakeFiles/PRF.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serhii/projects/CppTest/Crypto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libPRF.a"
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && $(CMAKE_COMMAND) -P CMakeFiles/PRF.dir/cmake_clean_target.cmake
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PRF.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
PRFs/CMakeFiles/PRF.dir/build: PRFs/libPRF.a
.PHONY : PRFs/CMakeFiles/PRF.dir/build

PRFs/CMakeFiles/PRF.dir/clean:
	cd /home/serhii/projects/CppTest/Crypto/build/PRFs && $(CMAKE_COMMAND) -P CMakeFiles/PRF.dir/cmake_clean.cmake
.PHONY : PRFs/CMakeFiles/PRF.dir/clean

PRFs/CMakeFiles/PRF.dir/depend:
	cd /home/serhii/projects/CppTest/Crypto/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serhii/projects/CppTest/Crypto /home/serhii/projects/CppTest/Crypto/PRFs /home/serhii/projects/CppTest/Crypto/build /home/serhii/projects/CppTest/Crypto/build/PRFs /home/serhii/projects/CppTest/Crypto/build/PRFs/CMakeFiles/PRF.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : PRFs/CMakeFiles/PRF.dir/depend

