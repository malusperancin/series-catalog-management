# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /home/felipe/.cache/JetBrains/RemoteDev/dist/0a55911a5a2e1_CLion-2024.1.1/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/felipe/.cache/JetBrains/RemoteDev/dist/0a55911a5a2e1_CLion-2024.1.1/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/felipe/POO I/series-catalog-management"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/felipe/POO I/series-catalog-management/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ProjetoPOO.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjetoPOO.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjetoPOO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjetoPOO.dir/flags.make

CMakeFiles/ProjetoPOO.dir/main.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/main.cpp.o: /home/felipe/POO\ I/series-catalog-management/main.cpp
CMakeFiles/ProjetoPOO.dir/main.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjetoPOO.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/main.cpp.o -MF CMakeFiles/ProjetoPOO.dir/main.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/main.cpp.o -c "/home/felipe/POO I/series-catalog-management/main.cpp"

CMakeFiles/ProjetoPOO.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/main.cpp" > CMakeFiles/ProjetoPOO.dir/main.cpp.i

CMakeFiles/ProjetoPOO.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/main.cpp" -o CMakeFiles/ProjetoPOO.dir/main.cpp.s

CMakeFiles/ProjetoPOO.dir/MainController.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/MainController.cpp.o: /home/felipe/POO\ I/series-catalog-management/MainController.cpp
CMakeFiles/ProjetoPOO.dir/MainController.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProjetoPOO.dir/MainController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/MainController.cpp.o -MF CMakeFiles/ProjetoPOO.dir/MainController.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/MainController.cpp.o -c "/home/felipe/POO I/series-catalog-management/MainController.cpp"

CMakeFiles/ProjetoPOO.dir/MainController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/MainController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/MainController.cpp" > CMakeFiles/ProjetoPOO.dir/MainController.cpp.i

CMakeFiles/ProjetoPOO.dir/MainController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/MainController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/MainController.cpp" -o CMakeFiles/ProjetoPOO.dir/MainController.cpp.s

CMakeFiles/ProjetoPOO.dir/Menu.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/Menu.cpp.o: /home/felipe/POO\ I/series-catalog-management/Menu.cpp
CMakeFiles/ProjetoPOO.dir/Menu.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ProjetoPOO.dir/Menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/Menu.cpp.o -MF CMakeFiles/ProjetoPOO.dir/Menu.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/Menu.cpp.o -c "/home/felipe/POO I/series-catalog-management/Menu.cpp"

CMakeFiles/ProjetoPOO.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/Menu.cpp" > CMakeFiles/ProjetoPOO.dir/Menu.cpp.i

CMakeFiles/ProjetoPOO.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/Menu.cpp" -o CMakeFiles/ProjetoPOO.dir/Menu.cpp.s

CMakeFiles/ProjetoPOO.dir/Series.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/Series.cpp.o: /home/felipe/POO\ I/series-catalog-management/Series.cpp
CMakeFiles/ProjetoPOO.dir/Series.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ProjetoPOO.dir/Series.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/Series.cpp.o -MF CMakeFiles/ProjetoPOO.dir/Series.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/Series.cpp.o -c "/home/felipe/POO I/series-catalog-management/Series.cpp"

CMakeFiles/ProjetoPOO.dir/Series.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/Series.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/Series.cpp" > CMakeFiles/ProjetoPOO.dir/Series.cpp.i

CMakeFiles/ProjetoPOO.dir/Series.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/Series.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/Series.cpp" -o CMakeFiles/ProjetoPOO.dir/Series.cpp.s

CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o: /home/felipe/POO\ I/series-catalog-management/SeriesDBDAO.cpp
CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o -MF CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o -c "/home/felipe/POO I/series-catalog-management/SeriesDBDAO.cpp"

CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/SeriesDBDAO.cpp" > CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.i

CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/SeriesDBDAO.cpp" -o CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.s

CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o: /home/felipe/POO\ I/series-catalog-management/MemoryDBConnection.cpp
CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o -MF CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o -c "/home/felipe/POO I/series-catalog-management/MemoryDBConnection.cpp"

CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/MemoryDBConnection.cpp" > CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.i

CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/MemoryDBConnection.cpp" -o CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.s

CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o: /home/felipe/POO\ I/series-catalog-management/SeriesMemDAO.cpp
CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o -MF CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o -c "/home/felipe/POO I/series-catalog-management/SeriesMemDAO.cpp"

CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/SeriesMemDAO.cpp" > CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.i

CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/SeriesMemDAO.cpp" -o CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.s

CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o: /home/felipe/POO\ I/series-catalog-management/ServerDBConnection.cpp
CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o -MF CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o -c "/home/felipe/POO I/series-catalog-management/ServerDBConnection.cpp"

CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/ServerDBConnection.cpp" > CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.i

CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/ServerDBConnection.cpp" -o CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.s

CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o: /home/felipe/POO\ I/series-catalog-management/AbstractSeriesDAO.cpp
CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o -MF CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o -c "/home/felipe/POO I/series-catalog-management/AbstractSeriesDAO.cpp"

CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/AbstractSeriesDAO.cpp" > CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.i

CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/AbstractSeriesDAO.cpp" -o CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.s

CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o: /home/felipe/POO\ I/series-catalog-management/TextFromFile.cpp
CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o -MF CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o -c "/home/felipe/POO I/series-catalog-management/TextFromFile.cpp"

CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/TextFromFile.cpp" > CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.i

CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/TextFromFile.cpp" -o CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.s

CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o: CMakeFiles/ProjetoPOO.dir/flags.make
CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o: /home/felipe/POO\ I/series-catalog-management/SeriesController.cpp
CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o: CMakeFiles/ProjetoPOO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o -MF CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o.d -o CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o -c "/home/felipe/POO I/series-catalog-management/SeriesController.cpp"

CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/felipe/POO I/series-catalog-management/SeriesController.cpp" > CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.i

CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/felipe/POO I/series-catalog-management/SeriesController.cpp" -o CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.s

# Object files for target ProjetoPOO
ProjetoPOO_OBJECTS = \
"CMakeFiles/ProjetoPOO.dir/main.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/MainController.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/Menu.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/Series.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o" \
"CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o"

# External object files for target ProjetoPOO
ProjetoPOO_EXTERNAL_OBJECTS =

ProjetoPOO: CMakeFiles/ProjetoPOO.dir/main.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/MainController.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/Menu.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/Series.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/SeriesDBDAO.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/MemoryDBConnection.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/SeriesMemDAO.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/ServerDBConnection.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/AbstractSeriesDAO.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/TextFromFile.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/SeriesController.cpp.o
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/build.make
ProjetoPOO: CMakeFiles/ProjetoPOO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable ProjetoPOO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjetoPOO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjetoPOO.dir/build: ProjetoPOO
.PHONY : CMakeFiles/ProjetoPOO.dir/build

CMakeFiles/ProjetoPOO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjetoPOO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjetoPOO.dir/clean

CMakeFiles/ProjetoPOO.dir/depend:
	cd "/home/felipe/POO I/series-catalog-management/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/felipe/POO I/series-catalog-management" "/home/felipe/POO I/series-catalog-management" "/home/felipe/POO I/series-catalog-management/cmake-build-debug" "/home/felipe/POO I/series-catalog-management/cmake-build-debug" "/home/felipe/POO I/series-catalog-management/cmake-build-debug/CMakeFiles/ProjetoPOO.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ProjetoPOO.dir/depend
