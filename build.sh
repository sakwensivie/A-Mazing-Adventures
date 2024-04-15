#!/usr/bin/env bash
# A script to build the project
# 
gcc ./src/*.c  -o ./bin/prog.out -I./include -lSDL2 -ldl  # -Wall -Wextra -Werror -pedantic
