# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/brendanehle/CLionProjects/rummikub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/brendanehle/CLionProjects/rummikub/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rummikub.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rummikub.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rummikub.dir/flags.make

CMakeFiles/rummikub.dir/main.cpp.o: CMakeFiles/rummikub.dir/flags.make
CMakeFiles/rummikub.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rummikub.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rummikub.dir/main.cpp.o -c /Users/brendanehle/CLionProjects/rummikub/main.cpp

CMakeFiles/rummikub.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rummikub.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brendanehle/CLionProjects/rummikub/main.cpp > CMakeFiles/rummikub.dir/main.cpp.i

CMakeFiles/rummikub.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rummikub.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brendanehle/CLionProjects/rummikub/main.cpp -o CMakeFiles/rummikub.dir/main.cpp.s

CMakeFiles/rummikub.dir/hand.cpp.o: CMakeFiles/rummikub.dir/flags.make
CMakeFiles/rummikub.dir/hand.cpp.o: ../hand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rummikub.dir/hand.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rummikub.dir/hand.cpp.o -c /Users/brendanehle/CLionProjects/rummikub/hand.cpp

CMakeFiles/rummikub.dir/hand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rummikub.dir/hand.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brendanehle/CLionProjects/rummikub/hand.cpp > CMakeFiles/rummikub.dir/hand.cpp.i

CMakeFiles/rummikub.dir/hand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rummikub.dir/hand.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brendanehle/CLionProjects/rummikub/hand.cpp -o CMakeFiles/rummikub.dir/hand.cpp.s

CMakeFiles/rummikub.dir/deck.cpp.o: CMakeFiles/rummikub.dir/flags.make
CMakeFiles/rummikub.dir/deck.cpp.o: ../deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rummikub.dir/deck.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rummikub.dir/deck.cpp.o -c /Users/brendanehle/CLionProjects/rummikub/deck.cpp

CMakeFiles/rummikub.dir/deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rummikub.dir/deck.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brendanehle/CLionProjects/rummikub/deck.cpp > CMakeFiles/rummikub.dir/deck.cpp.i

CMakeFiles/rummikub.dir/deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rummikub.dir/deck.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brendanehle/CLionProjects/rummikub/deck.cpp -o CMakeFiles/rummikub.dir/deck.cpp.s

CMakeFiles/rummikub.dir/tile.cpp.o: CMakeFiles/rummikub.dir/flags.make
CMakeFiles/rummikub.dir/tile.cpp.o: ../tile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/rummikub.dir/tile.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rummikub.dir/tile.cpp.o -c /Users/brendanehle/CLionProjects/rummikub/tile.cpp

CMakeFiles/rummikub.dir/tile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rummikub.dir/tile.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brendanehle/CLionProjects/rummikub/tile.cpp > CMakeFiles/rummikub.dir/tile.cpp.i

CMakeFiles/rummikub.dir/tile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rummikub.dir/tile.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brendanehle/CLionProjects/rummikub/tile.cpp -o CMakeFiles/rummikub.dir/tile.cpp.s

# Object files for target rummikub
rummikub_OBJECTS = \
"CMakeFiles/rummikub.dir/main.cpp.o" \
"CMakeFiles/rummikub.dir/hand.cpp.o" \
"CMakeFiles/rummikub.dir/deck.cpp.o" \
"CMakeFiles/rummikub.dir/tile.cpp.o"

# External object files for target rummikub
rummikub_EXTERNAL_OBJECTS =

rummikub: CMakeFiles/rummikub.dir/main.cpp.o
rummikub: CMakeFiles/rummikub.dir/hand.cpp.o
rummikub: CMakeFiles/rummikub.dir/deck.cpp.o
rummikub: CMakeFiles/rummikub.dir/tile.cpp.o
rummikub: CMakeFiles/rummikub.dir/build.make
rummikub: CMakeFiles/rummikub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable rummikub"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rummikub.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rummikub.dir/build: rummikub

.PHONY : CMakeFiles/rummikub.dir/build

CMakeFiles/rummikub.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rummikub.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rummikub.dir/clean

CMakeFiles/rummikub.dir/depend:
	cd /Users/brendanehle/CLionProjects/rummikub/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brendanehle/CLionProjects/rummikub /Users/brendanehle/CLionProjects/rummikub /Users/brendanehle/CLionProjects/rummikub/cmake-build-debug /Users/brendanehle/CLionProjects/rummikub/cmake-build-debug /Users/brendanehle/CLionProjects/rummikub/cmake-build-debug/CMakeFiles/rummikub.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rummikub.dir/depend
