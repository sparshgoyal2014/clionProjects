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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\spars\CLionProjects\arrayDecayIn2DArrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arrayDecayIn2DArrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arrayDecayIn2DArrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrayDecayIn2DArrays.dir/flags.make

CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.obj: CMakeFiles/arrayDecayIn2DArrays.dir/flags.make
CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\arrayDecayIn2DArrays.dir\main.cpp.obj -c C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\main.cpp

CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\main.cpp > CMakeFiles\arrayDecayIn2DArrays.dir\main.cpp.i

CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\main.cpp -o CMakeFiles\arrayDecayIn2DArrays.dir\main.cpp.s

# Object files for target arrayDecayIn2DArrays
arrayDecayIn2DArrays_OBJECTS = \
"CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.obj"

# External object files for target arrayDecayIn2DArrays
arrayDecayIn2DArrays_EXTERNAL_OBJECTS =

arrayDecayIn2DArrays.exe: CMakeFiles/arrayDecayIn2DArrays.dir/main.cpp.obj
arrayDecayIn2DArrays.exe: CMakeFiles/arrayDecayIn2DArrays.dir/build.make
arrayDecayIn2DArrays.exe: CMakeFiles/arrayDecayIn2DArrays.dir/linklibs.rsp
arrayDecayIn2DArrays.exe: CMakeFiles/arrayDecayIn2DArrays.dir/objects1.rsp
arrayDecayIn2DArrays.exe: CMakeFiles/arrayDecayIn2DArrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arrayDecayIn2DArrays.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arrayDecayIn2DArrays.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arrayDecayIn2DArrays.dir/build: arrayDecayIn2DArrays.exe

.PHONY : CMakeFiles/arrayDecayIn2DArrays.dir/build

CMakeFiles/arrayDecayIn2DArrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arrayDecayIn2DArrays.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arrayDecayIn2DArrays.dir/clean

CMakeFiles/arrayDecayIn2DArrays.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spars\CLionProjects\arrayDecayIn2DArrays C:\Users\spars\CLionProjects\arrayDecayIn2DArrays C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug C:\Users\spars\CLionProjects\arrayDecayIn2DArrays\cmake-build-debug\CMakeFiles\arrayDecayIn2DArrays.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arrayDecayIn2DArrays.dir/depend

