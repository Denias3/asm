cmake_minimum_required(VERSION 3.15)
project(asm C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -Werror -Wextra")
file(GLOB LIBFT ft_printf/*.c ft_printf/*.h ft_printf/libft/*.c ft_printf/libft/*.h)

set(SOURCES asm.c file_check.c)

add_executable(asm ${SOURCES} ${LIBFT})

