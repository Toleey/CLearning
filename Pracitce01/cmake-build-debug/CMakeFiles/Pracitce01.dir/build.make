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
CMAKE_COMMAND = "/Users/toby/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/toby/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/toby/CLionProjects/Pracitce01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/toby/CLionProjects/Pracitce01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pracitce01.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Pracitce01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pracitce01.dir/flags.make

CMakeFiles/Pracitce01.dir/main.c.o: CMakeFiles/Pracitce01.dir/flags.make
CMakeFiles/Pracitce01.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/toby/CLionProjects/Pracitce01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Pracitce01.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Pracitce01.dir/main.c.o -c /Users/toby/CLionProjects/Pracitce01/main.c

CMakeFiles/Pracitce01.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Pracitce01.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/toby/CLionProjects/Pracitce01/main.c > CMakeFiles/Pracitce01.dir/main.c.i

CMakeFiles/Pracitce01.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Pracitce01.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/toby/CLionProjects/Pracitce01/main.c -o CMakeFiles/Pracitce01.dir/main.c.s

# Object files for target Pracitce01
Pracitce01_OBJECTS = \
"CMakeFiles/Pracitce01.dir/main.c.o"

# External object files for target Pracitce01
Pracitce01_EXTERNAL_OBJECTS =

Pracitce01: CMakeFiles/Pracitce01.dir/main.c.o
Pracitce01: CMakeFiles/Pracitce01.dir/build.make
Pracitce01: CMakeFiles/Pracitce01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/toby/CLionProjects/Pracitce01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Pracitce01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pracitce01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pracitce01.dir/build: Pracitce01
.PHONY : CMakeFiles/Pracitce01.dir/build

CMakeFiles/Pracitce01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pracitce01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pracitce01.dir/clean

CMakeFiles/Pracitce01.dir/depend:
	cd /Users/toby/CLionProjects/Pracitce01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/toby/CLionProjects/Pracitce01 /Users/toby/CLionProjects/Pracitce01 /Users/toby/CLionProjects/Pracitce01/cmake-build-debug /Users/toby/CLionProjects/Pracitce01/cmake-build-debug /Users/toby/CLionProjects/Pracitce01/cmake-build-debug/CMakeFiles/Pracitce01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pracitce01.dir/depend

