# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\develop\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = E:\develop\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Cwork\LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Cwork\LeetCode\cmake-build-debug

# Include any dependencies generated for this target.
include 14/CMakeFiles/14.dir/depend.make

# Include the progress variables for this target.
include 14/CMakeFiles/14.dir/progress.make

# Include the compile flags for this target's objects.
include 14/CMakeFiles/14.dir/flags.make

14/CMakeFiles/14.dir/14.c.obj: 14/CMakeFiles/14.dir/flags.make
14/CMakeFiles/14.dir/14.c.obj: 14/CMakeFiles/14.dir/includes_C.rsp
14/CMakeFiles/14.dir/14.c.obj: ../14/14.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cwork\LeetCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 14/CMakeFiles/14.dir/14.c.obj"
	cd /d E:\Cwork\LeetCode\cmake-build-debug\14 && E:\develop\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\14.dir\14.c.obj -c E:\Cwork\LeetCode\14\14.c

14/CMakeFiles/14.dir/14.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/14.c.i"
	cd /d E:\Cwork\LeetCode\cmake-build-debug\14 && E:\develop\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Cwork\LeetCode\14\14.c > CMakeFiles\14.dir\14.c.i

14/CMakeFiles/14.dir/14.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/14.c.s"
	cd /d E:\Cwork\LeetCode\cmake-build-debug\14 && E:\develop\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Cwork\LeetCode\14\14.c -o CMakeFiles\14.dir\14.c.s

# Object files for target 14
14_OBJECTS = \
"CMakeFiles/14.dir/14.c.obj"

# External object files for target 14
14_EXTERNAL_OBJECTS =

14/14.exe: 14/CMakeFiles/14.dir/14.c.obj
14/14.exe: 14/CMakeFiles/14.dir/build.make
14/14.exe: 14/CMakeFiles/14.dir/linklibs.rsp
14/14.exe: 14/CMakeFiles/14.dir/objects1.rsp
14/14.exe: 14/CMakeFiles/14.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cwork\LeetCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 14.exe"
	cd /d E:\Cwork\LeetCode\cmake-build-debug\14 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\14.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
14/CMakeFiles/14.dir/build: 14/14.exe

.PHONY : 14/CMakeFiles/14.dir/build

14/CMakeFiles/14.dir/clean:
	cd /d E:\Cwork\LeetCode\cmake-build-debug\14 && $(CMAKE_COMMAND) -P CMakeFiles\14.dir\cmake_clean.cmake
.PHONY : 14/CMakeFiles/14.dir/clean

14/CMakeFiles/14.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cwork\LeetCode E:\Cwork\LeetCode\14 E:\Cwork\LeetCode\cmake-build-debug E:\Cwork\LeetCode\cmake-build-debug\14 E:\Cwork\LeetCode\cmake-build-debug\14\CMakeFiles\14.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 14/CMakeFiles/14.dir/depend

