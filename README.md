# Libft @ 42 Silicon Valley
My implementation of some of the Standard C Library functions.
### What is it?
Libft is an individual project at 42 that requires us to re-create 
some standard C library functions including some additional ones that 
can be used later to build a library of useful functions for the rest 
of the program.
### How to use it
The goal is to create a library called libft.a from 
the source files so I can later use that library from 
other projects at 
42.

To create that library, after downloading/cloning this project, 
**cd** into the project with your terminal, copy all the files 
from the sub folders to the root directory and 
finally, call make:

	git clone https://github.com/patrisor/libft.git
	cd libft
	make

**NOTE**: You should see a *libft.a* file and some object files (.o).

Call `make clean`: to clean up (removing the .o files from the root)

Call `make fclean`: to remove the libft.a 

Call `make re`: to recompile source files

Call `make coffee`: if you are sleepy and need a pick-me-up!

**Include** the header in your C project main file:
```c
#include "libft.h"
```

**Compile** the library with the main file like so:
```c
gcc libft.a -I . main.c -o main.o
```
