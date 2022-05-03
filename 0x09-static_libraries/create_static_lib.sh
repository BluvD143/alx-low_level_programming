#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
