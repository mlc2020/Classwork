# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Mihiros\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Mihiros\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Mihiros\CLionProjects\LW6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LW6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LW6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LW6.dir/flags.make

CMakeFiles/LW6.dir/functions.cpp.obj: CMakeFiles/LW6.dir/flags.make
CMakeFiles/LW6.dir/functions.cpp.obj: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LW6.dir/functions.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LW6.dir\functions.cpp.obj -c C:\Users\Mihiros\CLionProjects\LW6\functions.cpp

CMakeFiles/LW6.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LW6.dir/functions.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mihiros\CLionProjects\LW6\functions.cpp > CMakeFiles\LW6.dir\functions.cpp.i

CMakeFiles/LW6.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LW6.dir/functions.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mihiros\CLionProjects\LW6\functions.cpp -o CMakeFiles\LW6.dir\functions.cpp.s

CMakeFiles/LW6.dir/image.cpp.obj: CMakeFiles/LW6.dir/flags.make
CMakeFiles/LW6.dir/image.cpp.obj: ../image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LW6.dir/image.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LW6.dir\image.cpp.obj -c C:\Users\Mihiros\CLionProjects\LW6\image.cpp

CMakeFiles/LW6.dir/image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LW6.dir/image.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mihiros\CLionProjects\LW6\image.cpp > CMakeFiles\LW6.dir\image.cpp.i

CMakeFiles/LW6.dir/image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LW6.dir/image.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mihiros\CLionProjects\LW6\image.cpp -o CMakeFiles\LW6.dir\image.cpp.s

# Object files for target LW6
LW6_OBJECTS = \
"CMakeFiles/LW6.dir/functions.cpp.obj" \
"CMakeFiles/LW6.dir/image.cpp.obj"

# External object files for target LW6
LW6_EXTERNAL_OBJECTS =

LW6.exe: CMakeFiles/LW6.dir/functions.cpp.obj
LW6.exe: CMakeFiles/LW6.dir/image.cpp.obj
LW6.exe: CMakeFiles/LW6.dir/build.make
LW6.exe: CMakeFiles/LW6.dir/linklibs.rsp
LW6.exe: CMakeFiles/LW6.dir/objects1.rsp
LW6.exe: CMakeFiles/LW6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LW6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LW6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LW6.dir/build: LW6.exe

.PHONY : CMakeFiles/LW6.dir/build

CMakeFiles/LW6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LW6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LW6.dir/clean

CMakeFiles/LW6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Mihiros\CLionProjects\LW6 C:\Users\Mihiros\CLionProjects\LW6 C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug C:\Users\Mihiros\CLionProjects\LW6\cmake-build-debug\CMakeFiles\LW6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LW6.dir/depend
