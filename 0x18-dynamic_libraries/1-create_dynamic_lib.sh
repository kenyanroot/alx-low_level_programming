#!/bin/bash
# Script to create a dynamic library from all .c files in the current directory

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a dynamic library 'liball.so' from all the object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm -f *.o
