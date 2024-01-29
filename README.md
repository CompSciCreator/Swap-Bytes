Byte Swapping Program README

Description:
This program swaps the bytes of a 4-byte integer provided as a command-line argument and prints the result in hexadecimal format. It is written in C programming language.

Files:
- Byte.c: Original Source code C file.
- a.out: original gcc compiled file of source code for the byte swapping program.
- byte_swap.c: Contains the FINAL compiled source code for the byte swapping program. (gcc -o byte_swap Byte.c)

Compilation and Execution:
To compile the program, use a C compiler such as gcc:

gcc -o byte_swap byte_swap.c

To execute the program, run the compiled executable with a 4-byte integer argument:

/byte_swap <integer>

Replace <integer> with the integer you want to swap the bytes for.

Usage:
- The program expects one command-line argument, which should be a 4-byte integer.
- If no argument is provided, the program displays an error message and exits.
- After swapping the bytes, the program prints the swapped output in hexadecimal format.

Example:   ./byte_swap 12345678

This command will swap the bytes of the integer 12345678 and print the result.

Author:
This program was written by ANDREW PAOLELLA

Date:
1/26/24



