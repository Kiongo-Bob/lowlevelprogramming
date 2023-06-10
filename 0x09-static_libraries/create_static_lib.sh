#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs liball.a *.o
ranlib liball.a
rm *.o
echo "Static library liball.a created successfully.
