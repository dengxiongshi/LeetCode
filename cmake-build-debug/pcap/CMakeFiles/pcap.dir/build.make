# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/e/Cwork/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/e/Cwork/LeetCode/cmake-build-debug

# Include any dependencies generated for this target.
include pcap/CMakeFiles/pcap.dir/depend.make

# Include the progress variables for this target.
include pcap/CMakeFiles/pcap.dir/progress.make

# Include the compile flags for this target's objects.
include pcap/CMakeFiles/pcap.dir/flags.make

pcap/CMakeFiles/pcap.dir/pcap.c.o: pcap/CMakeFiles/pcap.dir/flags.make
pcap/CMakeFiles/pcap.dir/pcap.c.o: ../pcap/pcap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/e/Cwork/LeetCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object pcap/CMakeFiles/pcap.dir/pcap.c.o"
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pcap.dir/pcap.c.o   -c /mnt/e/Cwork/LeetCode/pcap/pcap.c

pcap/CMakeFiles/pcap.dir/pcap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcap.dir/pcap.c.i"
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/e/Cwork/LeetCode/pcap/pcap.c > CMakeFiles/pcap.dir/pcap.c.i

pcap/CMakeFiles/pcap.dir/pcap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcap.dir/pcap.c.s"
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/e/Cwork/LeetCode/pcap/pcap.c -o CMakeFiles/pcap.dir/pcap.c.s

# Object files for target pcap
pcap_OBJECTS = \
"CMakeFiles/pcap.dir/pcap.c.o"

# External object files for target pcap
pcap_EXTERNAL_OBJECTS =

pcap/pcap: pcap/CMakeFiles/pcap.dir/pcap.c.o
pcap/pcap: pcap/CMakeFiles/pcap.dir/build.make
pcap/pcap: pcap/CMakeFiles/pcap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/e/Cwork/LeetCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pcap"
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pcap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pcap/CMakeFiles/pcap.dir/build: pcap/pcap

.PHONY : pcap/CMakeFiles/pcap.dir/build

pcap/CMakeFiles/pcap.dir/clean:
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap && $(CMAKE_COMMAND) -P CMakeFiles/pcap.dir/cmake_clean.cmake
.PHONY : pcap/CMakeFiles/pcap.dir/clean

pcap/CMakeFiles/pcap.dir/depend:
	cd /mnt/e/Cwork/LeetCode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/e/Cwork/LeetCode /mnt/e/Cwork/LeetCode/pcap /mnt/e/Cwork/LeetCode/cmake-build-debug /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap /mnt/e/Cwork/LeetCode/cmake-build-debug/pcap/CMakeFiles/pcap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : pcap/CMakeFiles/pcap.dir/depend
