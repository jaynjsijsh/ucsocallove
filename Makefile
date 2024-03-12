# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csmajs/rkand011/final-project-rkand011-lcano014-jtan127-rdiaz082

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/rkand011/final-project-rkand011-lcano014-jtan127-rdiaz082

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/rkand011/final-project-rkand011-lcano014-jtan127-rdiaz082/CMakeFiles /home/csmajs/rkand011/final-project-rkand011-lcano014-jtan127-rdiaz082//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/rkand011/final-project-rkand011-lcano014-jtan127-rdiaz082/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named src/main.cpp

# Build rule for target.
src/main.cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 src/main.cpp
.PHONY : src/main.cpp

# fast build rule for target.
src/main.cpp/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/build
.PHONY : src/main.cpp/fast

src/Character.o: src/Character.cpp.o
.PHONY : src/Character.o

# target to build an object file
src/Character.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Character.cpp.o
.PHONY : src/Character.cpp.o

src/Character.i: src/Character.cpp.i
.PHONY : src/Character.i

# target to preprocess a source file
src/Character.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Character.cpp.i
.PHONY : src/Character.cpp.i

src/Character.s: src/Character.cpp.s
.PHONY : src/Character.s

# target to generate assembly for a file
src/Character.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Character.cpp.s
.PHONY : src/Character.cpp.s

src/Game.o: src/Game.cpp.o
.PHONY : src/Game.o

# target to build an object file
src/Game.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Game.cpp.o
.PHONY : src/Game.cpp.o

src/Game.i: src/Game.cpp.i
.PHONY : src/Game.i

# target to preprocess a source file
src/Game.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Game.cpp.i
.PHONY : src/Game.cpp.i

src/Game.s: src/Game.cpp.s
.PHONY : src/Game.s

# target to generate assembly for a file
src/Game.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/Game.cpp.s
.PHONY : src/Game.cpp.s

src/SlowTyping.o: src/SlowTyping.cpp.o
.PHONY : src/SlowTyping.o

# target to build an object file
src/SlowTyping.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/SlowTyping.cpp.o
.PHONY : src/SlowTyping.cpp.o

src/SlowTyping.i: src/SlowTyping.cpp.i
.PHONY : src/SlowTyping.i

# target to preprocess a source file
src/SlowTyping.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/SlowTyping.cpp.i
.PHONY : src/SlowTyping.cpp.i

src/SlowTyping.s: src/SlowTyping.cpp.s
.PHONY : src/SlowTyping.s

# target to generate assembly for a file
src/SlowTyping.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/SlowTyping.cpp.s
.PHONY : src/SlowTyping.cpp.s

src/UCR.o: src/UCR.cpp.o
.PHONY : src/UCR.o

# target to build an object file
src/UCR.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/UCR.cpp.o
.PHONY : src/UCR.cpp.o

src/UCR.i: src/UCR.cpp.i
.PHONY : src/UCR.i

# target to preprocess a source file
src/UCR.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/UCR.cpp.i
.PHONY : src/UCR.cpp.i

src/UCR.s: src/UCR.cpp.s
.PHONY : src/UCR.s

# target to generate assembly for a file
src/UCR.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src/main.cpp.dir/build.make CMakeFiles/src/main.cpp.dir/src/UCR.cpp.s
.PHONY : src/UCR.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... src/main.cpp"
	@echo "... src/Character.o"
	@echo "... src/Character.i"
	@echo "... src/Character.s"
	@echo "... src/Game.o"
	@echo "... src/Game.i"
	@echo "... src/Game.s"
	@echo "... src/SlowTyping.o"
	@echo "... src/SlowTyping.i"
	@echo "... src/SlowTyping.s"
	@echo "... src/UCR.o"
	@echo "... src/UCR.i"
	@echo "... src/UCR.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

