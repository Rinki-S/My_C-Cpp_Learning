# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build

# Include any dependencies generated for this target.
include CMakeFiles/6-22.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/6-22.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/6-22.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6-22.dir/flags.make

CMakeFiles/6-22.dir/PTA/Function/6-22.c.o: CMakeFiles/6-22.dir/flags.make
CMakeFiles/6-22.dir/PTA/Function/6-22.c.o: /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/PTA/Function/6-22.c
CMakeFiles/6-22.dir/PTA/Function/6-22.c.o: CMakeFiles/6-22.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/6-22.dir/PTA/Function/6-22.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/6-22.dir/PTA/Function/6-22.c.o -MF CMakeFiles/6-22.dir/PTA/Function/6-22.c.o.d -o CMakeFiles/6-22.dir/PTA/Function/6-22.c.o -c /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/PTA/Function/6-22.c

CMakeFiles/6-22.dir/PTA/Function/6-22.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/6-22.dir/PTA/Function/6-22.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/PTA/Function/6-22.c > CMakeFiles/6-22.dir/PTA/Function/6-22.c.i

CMakeFiles/6-22.dir/PTA/Function/6-22.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/6-22.dir/PTA/Function/6-22.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/PTA/Function/6-22.c -o CMakeFiles/6-22.dir/PTA/Function/6-22.c.s

# Object files for target 6-22
6__22_OBJECTS = \
"CMakeFiles/6-22.dir/PTA/Function/6-22.c.o"

# External object files for target 6-22
6__22_EXTERNAL_OBJECTS =

6-22: CMakeFiles/6-22.dir/PTA/Function/6-22.c.o
6-22: CMakeFiles/6-22.dir/build.make
6-22: CMakeFiles/6-22.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 6-22"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/6-22.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6-22.dir/build: 6-22
.PHONY : CMakeFiles/6-22.dir/build

CMakeFiles/6-22.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/6-22.dir/cmake_clean.cmake
.PHONY : CMakeFiles/6-22.dir/clean

CMakeFiles/6-22.dir/depend:
	cd /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build /Users/rinki/Library/CloudStorage/OneDrive-whut.edu.cn/Coding/C/build/CMakeFiles/6-22.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/6-22.dir/depend

