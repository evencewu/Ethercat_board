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

# Include any dependencies generated for this target.
include libraries/bsp/CMakeFiles/main_bsp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libraries/bsp/CMakeFiles/main_bsp.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/bsp/CMakeFiles/main_bsp.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/bsp/CMakeFiles/main_bsp.dir/flags.make

libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/flags.make
libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o: /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/delay.c
libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o -MF CMakeFiles/main_bsp.dir/Src/delay.c.o.d -o CMakeFiles/main_bsp.dir/Src/delay.c.o -c /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/delay.c

libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main_bsp.dir/Src/delay.c.i"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/delay.c > CMakeFiles/main_bsp.dir/Src/delay.c.i

libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main_bsp.dir/Src/delay.c.s"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/delay.c -o CMakeFiles/main_bsp.dir/Src/delay.c.s

libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/flags.make
libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o: /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/stm32f4_discovery.c
libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o -MF CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o.d -o CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o -c /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/stm32f4_discovery.c

libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.i"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/stm32f4_discovery.c > CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.i

libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.s"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/stm32f4_discovery.c -o CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.s

libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/flags.make
libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o: /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/system_stm32f4xx.c
libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o -MF CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o.d -o CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o -c /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/system_stm32f4xx.c

libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.i"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/system_stm32f4xx.c > CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.i

libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.s"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/system_stm32f4xx.c -o CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.s

libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/flags.make
libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o: /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/usart.c
libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o: libraries/bsp/CMakeFiles/main_bsp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o -MF CMakeFiles/main_bsp.dir/Src/usart.c.o.d -o CMakeFiles/main_bsp.dir/Src/usart.c.o -c /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/usart.c

libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main_bsp.dir/Src/usart.c.i"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/usart.c > CMakeFiles/main_bsp.dir/Src/usart.c.i

libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main_bsp.dir/Src/usart.c.s"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp/Src/usart.c -o CMakeFiles/main_bsp.dir/Src/usart.c.s

# Object files for target main_bsp
main_bsp_OBJECTS = \
"CMakeFiles/main_bsp.dir/Src/delay.c.o" \
"CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o" \
"CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o" \
"CMakeFiles/main_bsp.dir/Src/usart.c.o"

# External object files for target main_bsp
main_bsp_EXTERNAL_OBJECTS =

libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/Src/delay.c.o
libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/Src/stm32f4_discovery.c.o
libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/Src/system_stm32f4xx.c.o
libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/Src/usart.c.o
libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/build.make
libraries/bsp/libmain_bsp.a: libraries/bsp/CMakeFiles/main_bsp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C static library libmain_bsp.a"
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && $(CMAKE_COMMAND) -P CMakeFiles/main_bsp.dir/cmake_clean_target.cmake
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_bsp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/bsp/CMakeFiles/main_bsp.dir/build: libraries/bsp/libmain_bsp.a
.PHONY : libraries/bsp/CMakeFiles/main_bsp.dir/build

libraries/bsp/CMakeFiles/main_bsp.dir/clean:
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp && $(CMAKE_COMMAND) -P CMakeFiles/main_bsp.dir/cmake_clean.cmake
.PHONY : libraries/bsp/CMakeFiles/main_bsp.dir/clean

libraries/bsp/CMakeFiles/main_bsp.dir/depend:
	cd /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/src/Lib/bsp /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp /home/evence/github/Ethercat_board/test_demo/stm32F4_AX58100_HW/build/libraries/bsp/CMakeFiles/main_bsp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libraries/bsp/CMakeFiles/main_bsp.dir/depend

