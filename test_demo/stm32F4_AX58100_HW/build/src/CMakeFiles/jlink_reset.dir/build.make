# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/evence/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/evence/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build

# Utility rule file for jlink_reset.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/jlink_reset.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/jlink_reset.dir/progress.make

src/CMakeFiles/jlink_reset:
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/src && JLinkExe -device -speed 4000 -if SWD -CommanderScript /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/scripts/jlink-reset-stm32f4.jlink

jlink_reset: src/CMakeFiles/jlink_reset
jlink_reset: src/CMakeFiles/jlink_reset.dir/build.make
.PHONY : jlink_reset

# Rule to build all files generated by this target.
src/CMakeFiles/jlink_reset.dir/build: jlink_reset
.PHONY : src/CMakeFiles/jlink_reset.dir/build

src/CMakeFiles/jlink_reset.dir/clean:
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/src && $(CMAKE_COMMAND) -P CMakeFiles/jlink_reset.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/jlink_reset.dir/clean

src/CMakeFiles/jlink_reset.dir/depend:
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/src /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/src/CMakeFiles/jlink_reset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/jlink_reset.dir/depend

