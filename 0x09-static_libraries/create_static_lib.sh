#!/bin/bash

# Compile each .c file into object files
gcc -c *.c

# Create the static library liball.a from all the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

echo "Static library liball.a created successfully."

