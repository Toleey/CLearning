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
CMAKE_COMMAND = "/Users/toby/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/toby/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/toby/CLionProjects/practice1112

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/toby/CLionProjects/practice1112/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/practice1112.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/practice1112.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice1112.dir/flags.make

CMakeFiles/practice1112.dir/main.c.o: CMakeFiles/practice1112.dir/flags.make
CMakeFiles/practice1112.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/toby/CLionProjects/practice1112/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/practice1112.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/practice1112.dir/main.c.o -c /Users/toby/CLionProjects/practice1112/main.c

CMakeFiles/practice1112.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/practice1112.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/toby/CLionProjects/practice1112/main.c > CMakeFiles/practice1112.dir/main.c.i

CMakeFiles/practice1112.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/practice1112.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/toby/CLionProjects/practice1112/main.c -o CMakeFiles/practice1112.dir/main.c.s

# Object files for target practice1112
practice1112_OBJECTS = \
"CMakeFiles/practice1112.dir/main.c.o"

# External object files for target practice1112
practice1112_EXTERNAL_OBJECTS =

practice1112: CMakeFiles/practice1112.dir/main.c.o
practice1112: CMakeFiles/practice1112.dir/build.make
practice1112: CMakeFiles/practice1112.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/toby/CLionProjects/practice1112/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable practice1112"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practice1112.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice1112.dir/build: practice1112
.PHONY : CMakeFiles/practice1112.dir/build

CMakeFiles/practice1112.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practice1112.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practice1112.dir/clean

CMakeFiles/practice1112.dir/depend:
	cd /Users/toby/CLionProjects/practice1112/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/toby/CLionProjects/practice1112 /Users/toby/CLionProjects/practice1112 /Users/toby/CLionProjects/practice1112/cmake-build-debug /Users/toby/CLionProjects/practice1112/cmake-build-debug /Users/toby/CLionProjects/practice1112/cmake-build-debug/CMakeFiles/practice1112.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practice1112.dir/depend

