# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/cmake-3.12.4/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake-3.12.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/travis/build/JimmySnails/Cytopia

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/travis/build/JimmySnails/Cytopia/travis_build

# Include any dependencies generated for this target.
include src/TileDataUi/CMakeFiles/TileDataEditor.dir/depend.make

# Include the progress variables for this target.
include src/TileDataUi/CMakeFiles/TileDataEditor.dir/progress.make

# Include the compile flags for this target's objects.
include src/TileDataUi/CMakeFiles/TileDataEditor.dir/flags.make

src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.o: src/TileDataUi/CMakeFiles/TileDataEditor.dir/flags.make
src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.o: ../src/TileDataUi/main.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/travis/build/JimmySnails/Cytopia/travis_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.o"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TileDataEditor.dir/main.cxx.o -c /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/main.cxx

src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TileDataEditor.dir/main.cxx.i"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/main.cxx > CMakeFiles/TileDataEditor.dir/main.cxx.i

src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TileDataEditor.dir/main.cxx.s"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/main.cxx -o CMakeFiles/TileDataEditor.dir/main.cxx.s

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.o: src/TileDataUi/CMakeFiles/TileDataEditor.dir/flags.make
src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.o: ../src/TileDataUi/TileData.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/travis/build/JimmySnails/Cytopia/travis_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.o"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TileDataEditor.dir/TileData.cxx.o -c /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileData.cxx

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TileDataEditor.dir/TileData.cxx.i"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileData.cxx > CMakeFiles/TileDataEditor.dir/TileData.cxx.i

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TileDataEditor.dir/TileData.cxx.s"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileData.cxx -o CMakeFiles/TileDataEditor.dir/TileData.cxx.s

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o: src/TileDataUi/CMakeFiles/TileDataEditor.dir/flags.make
src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o: ../src/TileDataUi/TileDataUi.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/travis/build/JimmySnails/Cytopia/travis_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o -c /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileDataUi.cxx

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.i"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileDataUi.cxx > CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.i

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.s"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/travis/build/JimmySnails/Cytopia/src/TileDataUi/TileDataUi.cxx -o CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.s

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o: src/TileDataUi/CMakeFiles/TileDataEditor.dir/flags.make
src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o: src/TileDataUi/TileDataEditor_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/travis/build/JimmySnails/Cytopia/travis_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o -c /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi/TileDataEditor_autogen/mocs_compilation.cpp

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.i"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi/TileDataEditor_autogen/mocs_compilation.cpp > CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.i

src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.s"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi/TileDataEditor_autogen/mocs_compilation.cpp -o CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.s

# Object files for target TileDataEditor
TileDataEditor_OBJECTS = \
"CMakeFiles/TileDataEditor.dir/main.cxx.o" \
"CMakeFiles/TileDataEditor.dir/TileData.cxx.o" \
"CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o" \
"CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o"

# External object files for target TileDataEditor
TileDataEditor_EXTERNAL_OBJECTS =

TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/main.cxx.o
TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileData.cxx.o
TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataUi.cxx.o
TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/TileDataEditor_autogen/mocs_compilation.cpp.o
TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/build.make
TileDataEditor: /opt/qt512/lib/libQt5Widgets.so.5.12.1
TileDataEditor: /opt/qt512/lib/libQt5Gui.so.5.12.1
TileDataEditor: /opt/qt512/lib/libQt5Core.so.5.12.1
TileDataEditor: src/TileDataUi/CMakeFiles/TileDataEditor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/travis/build/JimmySnails/Cytopia/travis_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../TileDataEditor"
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TileDataEditor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/TileDataUi/CMakeFiles/TileDataEditor.dir/build: TileDataEditor

.PHONY : src/TileDataUi/CMakeFiles/TileDataEditor.dir/build

src/TileDataUi/CMakeFiles/TileDataEditor.dir/clean:
	cd /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi && $(CMAKE_COMMAND) -P CMakeFiles/TileDataEditor.dir/cmake_clean.cmake
.PHONY : src/TileDataUi/CMakeFiles/TileDataEditor.dir/clean

src/TileDataUi/CMakeFiles/TileDataEditor.dir/depend:
	cd /home/travis/build/JimmySnails/Cytopia/travis_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/travis/build/JimmySnails/Cytopia /home/travis/build/JimmySnails/Cytopia/src/TileDataUi /home/travis/build/JimmySnails/Cytopia/travis_build /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi /home/travis/build/JimmySnails/Cytopia/travis_build/src/TileDataUi/CMakeFiles/TileDataEditor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/TileDataUi/CMakeFiles/TileDataEditor.dir/depend
