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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rcarmen/school42/ptf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rcarmen/school42/ptf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ptf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ptf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ptf.dir/flags.make

CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o: ../libft/ft_itoa_base.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o   -c /home/rcarmen/school42/ptf/libft/ft_itoa_base.c

CMakeFiles/ptf.dir/libft/ft_itoa_base.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_itoa_base.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_itoa_base.c > CMakeFiles/ptf.dir/libft/ft_itoa_base.c.i

CMakeFiles/ptf.dir/libft/ft_itoa_base.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_itoa_base.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_itoa_base.c -o CMakeFiles/ptf.dir/libft/ft_itoa_base.c.s

CMakeFiles/ptf.dir/src/ft_point_detector.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_point_detector.c.o: ../src/ft_point_detector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ptf.dir/src/ft_point_detector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_point_detector.c.o   -c /home/rcarmen/school42/ptf/src/ft_point_detector.c

CMakeFiles/ptf.dir/src/ft_point_detector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_point_detector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_point_detector.c > CMakeFiles/ptf.dir/src/ft_point_detector.c.i

CMakeFiles/ptf.dir/src/ft_point_detector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_point_detector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_point_detector.c -o CMakeFiles/ptf.dir/src/ft_point_detector.c.s

CMakeFiles/ptf.dir/src/ft_printf.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_printf.c.o: ../src/ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ptf.dir/src/ft_printf.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_printf.c.o   -c /home/rcarmen/school42/ptf/src/ft_printf.c

CMakeFiles/ptf.dir/src/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_printf.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_printf.c > CMakeFiles/ptf.dir/src/ft_printf.c.i

CMakeFiles/ptf.dir/src/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_printf.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_printf.c -o CMakeFiles/ptf.dir/src/ft_printf.c.s

CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o: ../libft/ft_putchar_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o   -c /home/rcarmen/school42/ptf/libft/ft_putchar_fd.c

CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_putchar_fd.c > CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.i

CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_putchar_fd.c -o CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.s

CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o: ../libft/ft_putstr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o   -c /home/rcarmen/school42/ptf/libft/ft_putstr_fd.c

CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_putstr_fd.c > CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.i

CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_putstr_fd.c -o CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.s

CMakeFiles/ptf.dir/libft/ft_strlen.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_strlen.c.o: ../libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ptf.dir/libft/ft_strlen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_strlen.c.o   -c /home/rcarmen/school42/ptf/libft/ft_strlen.c

CMakeFiles/ptf.dir/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_strlen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_strlen.c > CMakeFiles/ptf.dir/libft/ft_strlen.c.i

CMakeFiles/ptf.dir/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_strlen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_strlen.c -o CMakeFiles/ptf.dir/libft/ft_strlen.c.s

CMakeFiles/ptf.dir/src/ft_u_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_u_print.c.o: ../src/ft_u_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ptf.dir/src/ft_u_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_u_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_u_print.c

CMakeFiles/ptf.dir/src/ft_u_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_u_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_u_print.c > CMakeFiles/ptf.dir/src/ft_u_print.c.i

CMakeFiles/ptf.dir/src/ft_u_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_u_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_u_print.c -o CMakeFiles/ptf.dir/src/ft_u_print.c.s

CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o: ../src/ft_u_ptf_putnbr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o   -c /home/rcarmen/school42/ptf/src/ft_u_ptf_putnbr_fd.c

CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_u_ptf_putnbr_fd.c > CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.i

CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_u_ptf_putnbr_fd.c -o CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.s

CMakeFiles/ptf.dir/src/ft_perc_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_perc_print.c.o: ../src/ft_perc_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ptf.dir/src/ft_perc_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_perc_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_perc_print.c

CMakeFiles/ptf.dir/src/ft_perc_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_perc_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_perc_print.c > CMakeFiles/ptf.dir/src/ft_perc_print.c.i

CMakeFiles/ptf.dir/src/ft_perc_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_perc_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_perc_print.c -o CMakeFiles/ptf.dir/src/ft_perc_print.c.s

CMakeFiles/ptf.dir/src/ft_p_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_p_print.c.o: ../src/ft_p_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ptf.dir/src/ft_p_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_p_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_p_print.c

CMakeFiles/ptf.dir/src/ft_p_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_p_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_p_print.c > CMakeFiles/ptf.dir/src/ft_p_print.c.i

CMakeFiles/ptf.dir/src/ft_p_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_p_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_p_print.c -o CMakeFiles/ptf.dir/src/ft_p_print.c.s

CMakeFiles/ptf.dir/main.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ptf.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/main.c.o   -c /home/rcarmen/school42/ptf/main.c

CMakeFiles/ptf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/main.c > CMakeFiles/ptf.dir/main.c.i

CMakeFiles/ptf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/main.c -o CMakeFiles/ptf.dir/main.c.s

CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o: ../src/ft_specifier_parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o   -c /home/rcarmen/school42/ptf/src/ft_specifier_parser.c

CMakeFiles/ptf.dir/src/ft_specifier_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_specifier_parser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_specifier_parser.c > CMakeFiles/ptf.dir/src/ft_specifier_parser.c.i

CMakeFiles/ptf.dir/src/ft_specifier_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_specifier_parser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_specifier_parser.c -o CMakeFiles/ptf.dir/src/ft_specifier_parser.c.s

CMakeFiles/ptf.dir/libft/ft_strncmp.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_strncmp.c.o: ../libft/ft_strncmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/ptf.dir/libft/ft_strncmp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_strncmp.c.o   -c /home/rcarmen/school42/ptf/libft/ft_strncmp.c

CMakeFiles/ptf.dir/libft/ft_strncmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_strncmp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_strncmp.c > CMakeFiles/ptf.dir/libft/ft_strncmp.c.i

CMakeFiles/ptf.dir/libft/ft_strncmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_strncmp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_strncmp.c -o CMakeFiles/ptf.dir/libft/ft_strncmp.c.s

CMakeFiles/ptf.dir/libft/ft_strchr.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_strchr.c.o: ../libft/ft_strchr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/ptf.dir/libft/ft_strchr.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_strchr.c.o   -c /home/rcarmen/school42/ptf/libft/ft_strchr.c

CMakeFiles/ptf.dir/libft/ft_strchr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_strchr.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_strchr.c > CMakeFiles/ptf.dir/libft/ft_strchr.c.i

CMakeFiles/ptf.dir/libft/ft_strchr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_strchr.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_strchr.c -o CMakeFiles/ptf.dir/libft/ft_strchr.c.s

CMakeFiles/ptf.dir/libft/ft_isdigit.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_isdigit.c.o: ../libft/ft_isdigit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/ptf.dir/libft/ft_isdigit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_isdigit.c.o   -c /home/rcarmen/school42/ptf/libft/ft_isdigit.c

CMakeFiles/ptf.dir/libft/ft_isdigit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_isdigit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_isdigit.c > CMakeFiles/ptf.dir/libft/ft_isdigit.c.i

CMakeFiles/ptf.dir/libft/ft_isdigit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_isdigit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_isdigit.c -o CMakeFiles/ptf.dir/libft/ft_isdigit.c.s

CMakeFiles/ptf.dir/src/ft_print_specifier.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_print_specifier.c.o: ../src/ft_print_specifier.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/ptf.dir/src/ft_print_specifier.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_print_specifier.c.o   -c /home/rcarmen/school42/ptf/src/ft_print_specifier.c

CMakeFiles/ptf.dir/src/ft_print_specifier.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_print_specifier.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_print_specifier.c > CMakeFiles/ptf.dir/src/ft_print_specifier.c.i

CMakeFiles/ptf.dir/src/ft_print_specifier.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_print_specifier.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_print_specifier.c -o CMakeFiles/ptf.dir/src/ft_print_specifier.c.s

CMakeFiles/ptf.dir/src/ft_c_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_c_print.c.o: ../src/ft_c_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/ptf.dir/src/ft_c_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_c_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_c_print.c

CMakeFiles/ptf.dir/src/ft_c_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_c_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_c_print.c > CMakeFiles/ptf.dir/src/ft_c_print.c.i

CMakeFiles/ptf.dir/src/ft_c_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_c_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_c_print.c -o CMakeFiles/ptf.dir/src/ft_c_print.c.s

CMakeFiles/ptf.dir/src/ft_x_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_x_print.c.o: ../src/ft_x_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/ptf.dir/src/ft_x_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_x_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_x_print.c

CMakeFiles/ptf.dir/src/ft_x_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_x_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_x_print.c > CMakeFiles/ptf.dir/src/ft_x_print.c.i

CMakeFiles/ptf.dir/src/ft_x_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_x_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_x_print.c -o CMakeFiles/ptf.dir/src/ft_x_print.c.s

CMakeFiles/ptf.dir/src/ft_s_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_s_print.c.o: ../src/ft_s_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/ptf.dir/src/ft_s_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_s_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_s_print.c

CMakeFiles/ptf.dir/src/ft_s_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_s_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_s_print.c > CMakeFiles/ptf.dir/src/ft_s_print.c.i

CMakeFiles/ptf.dir/src/ft_s_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_s_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_s_print.c -o CMakeFiles/ptf.dir/src/ft_s_print.c.s

CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o: ../src/ft_upper_x_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_upper_x_print.c

CMakeFiles/ptf.dir/src/ft_upper_x_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_upper_x_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_upper_x_print.c > CMakeFiles/ptf.dir/src/ft_upper_x_print.c.i

CMakeFiles/ptf.dir/src/ft_upper_x_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_upper_x_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_upper_x_print.c -o CMakeFiles/ptf.dir/src/ft_upper_x_print.c.s

CMakeFiles/ptf.dir/src/ft_di_print.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_di_print.c.o: ../src/ft_di_print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/ptf.dir/src/ft_di_print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_di_print.c.o   -c /home/rcarmen/school42/ptf/src/ft_di_print.c

CMakeFiles/ptf.dir/src/ft_di_print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_di_print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_di_print.c > CMakeFiles/ptf.dir/src/ft_di_print.c.i

CMakeFiles/ptf.dir/src/ft_di_print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_di_print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_di_print.c -o CMakeFiles/ptf.dir/src/ft_di_print.c.s

CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o: ../src/ft_ptf_putnbr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o   -c /home/rcarmen/school42/ptf/src/ft_ptf_putnbr_fd.c

CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/src/ft_ptf_putnbr_fd.c > CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.i

CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/src/ft_ptf_putnbr_fd.c -o CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.s

CMakeFiles/ptf.dir/libft/ft_bzero.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_bzero.c.o: ../libft/ft_bzero.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/ptf.dir/libft/ft_bzero.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_bzero.c.o   -c /home/rcarmen/school42/ptf/libft/ft_bzero.c

CMakeFiles/ptf.dir/libft/ft_bzero.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_bzero.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_bzero.c > CMakeFiles/ptf.dir/libft/ft_bzero.c.i

CMakeFiles/ptf.dir/libft/ft_bzero.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_bzero.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_bzero.c -o CMakeFiles/ptf.dir/libft/ft_bzero.c.s

CMakeFiles/ptf.dir/libft/ft_memset.c.o: CMakeFiles/ptf.dir/flags.make
CMakeFiles/ptf.dir/libft/ft_memset.c.o: ../libft/ft_memset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building C object CMakeFiles/ptf.dir/libft/ft_memset.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ptf.dir/libft/ft_memset.c.o   -c /home/rcarmen/school42/ptf/libft/ft_memset.c

CMakeFiles/ptf.dir/libft/ft_memset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ptf.dir/libft/ft_memset.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcarmen/school42/ptf/libft/ft_memset.c > CMakeFiles/ptf.dir/libft/ft_memset.c.i

CMakeFiles/ptf.dir/libft/ft_memset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ptf.dir/libft/ft_memset.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcarmen/school42/ptf/libft/ft_memset.c -o CMakeFiles/ptf.dir/libft/ft_memset.c.s

# Object files for target ptf
ptf_OBJECTS = \
"CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o" \
"CMakeFiles/ptf.dir/src/ft_point_detector.c.o" \
"CMakeFiles/ptf.dir/src/ft_printf.c.o" \
"CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o" \
"CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o" \
"CMakeFiles/ptf.dir/libft/ft_strlen.c.o" \
"CMakeFiles/ptf.dir/src/ft_u_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o" \
"CMakeFiles/ptf.dir/src/ft_perc_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_p_print.c.o" \
"CMakeFiles/ptf.dir/main.c.o" \
"CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o" \
"CMakeFiles/ptf.dir/libft/ft_strncmp.c.o" \
"CMakeFiles/ptf.dir/libft/ft_strchr.c.o" \
"CMakeFiles/ptf.dir/libft/ft_isdigit.c.o" \
"CMakeFiles/ptf.dir/src/ft_print_specifier.c.o" \
"CMakeFiles/ptf.dir/src/ft_c_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_x_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_s_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_di_print.c.o" \
"CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o" \
"CMakeFiles/ptf.dir/libft/ft_bzero.c.o" \
"CMakeFiles/ptf.dir/libft/ft_memset.c.o"

# External object files for target ptf
ptf_EXTERNAL_OBJECTS =

ptf: CMakeFiles/ptf.dir/libft/ft_itoa_base.c.o
ptf: CMakeFiles/ptf.dir/src/ft_point_detector.c.o
ptf: CMakeFiles/ptf.dir/src/ft_printf.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_putchar_fd.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_putstr_fd.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_strlen.c.o
ptf: CMakeFiles/ptf.dir/src/ft_u_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_u_ptf_putnbr_fd.c.o
ptf: CMakeFiles/ptf.dir/src/ft_perc_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_p_print.c.o
ptf: CMakeFiles/ptf.dir/main.c.o
ptf: CMakeFiles/ptf.dir/src/ft_specifier_parser.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_strncmp.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_strchr.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_isdigit.c.o
ptf: CMakeFiles/ptf.dir/src/ft_print_specifier.c.o
ptf: CMakeFiles/ptf.dir/src/ft_c_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_x_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_s_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_upper_x_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_di_print.c.o
ptf: CMakeFiles/ptf.dir/src/ft_ptf_putnbr_fd.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_bzero.c.o
ptf: CMakeFiles/ptf.dir/libft/ft_memset.c.o
ptf: CMakeFiles/ptf.dir/build.make
ptf: CMakeFiles/ptf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Linking C executable ptf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ptf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ptf.dir/build: ptf

.PHONY : CMakeFiles/ptf.dir/build

CMakeFiles/ptf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ptf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ptf.dir/clean

CMakeFiles/ptf.dir/depend:
	cd /home/rcarmen/school42/ptf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rcarmen/school42/ptf /home/rcarmen/school42/ptf /home/rcarmen/school42/ptf/cmake-build-debug /home/rcarmen/school42/ptf/cmake-build-debug /home/rcarmen/school42/ptf/cmake-build-debug/CMakeFiles/ptf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ptf.dir/depend

