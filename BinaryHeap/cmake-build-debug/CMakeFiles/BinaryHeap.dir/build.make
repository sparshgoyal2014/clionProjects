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
CMAKE_SOURCE_DIR = C:\Users\spars\CLionProjects\BinaryHeap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BinaryHeap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryHeap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryHeap.dir/flags.make

CMakeFiles/BinaryHeap.dir/main.cpp.obj: CMakeFiles/BinaryHeap.dir/flags.make
CMakeFiles/BinaryHeap.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BinaryHeap.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BinaryHeap.dir\main.cpp.obj -c C:\Users\spars\CLionProjects\BinaryHeap\main.cpp

CMakeFiles/BinaryHeap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinaryHeap.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spars\CLionProjects\BinaryHeap\main.cpp > CMakeFiles\BinaryHeap.dir\main.cpp.i

CMakeFiles/BinaryHeap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinaryHeap.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spars\CLionProjects\BinaryHeap\main.cpp -o CMakeFiles\BinaryHeap.dir\main.cpp.s

# Object files for target BinaryHeap
BinaryHeap_OBJECTS = \
"CMakeFiles/BinaryHeap.dir/main.cpp.obj"

# External object files for target BinaryHeap
BinaryHeap_EXTERNAL_OBJECTS =

BinaryHeap.exe: CMakeFiles/BinaryHeap.dir/main.cpp.obj
BinaryHeap.exe: CMakeFiles/BinaryHeap.dir/build.make
BinaryHeap.exe: CMakeFiles/BinaryHeap.dir/linklibs.rsp
BinaryHeap.exe: CMakeFiles/BinaryHeap.dir/objects1.rsp
BinaryHeap.exe: CMakeFiles/BinaryHeap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BinaryHeap.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BinaryHeap.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryHeap.dir/build: BinaryHeap.exe

.PHONY : CMakeFiles/BinaryHeap.dir/build

CMakeFiles/BinaryHeap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BinaryHeap.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BinaryHeap.dir/clean

CMakeFiles/BinaryHeap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spars\CLionProjects\BinaryHeap C:\Users\spars\CLionProjects\BinaryHeap C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug C:\Users\spars\CLionProjects\BinaryHeap\cmake-build-debug\CMakeFiles\BinaryHeap.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryHeap.dir/depend

