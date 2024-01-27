#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

int swap_bytes(int input){ 

    int output = 0;

    byte_pointer p = (byte_pointer)&input;
    byte_pointer q = (byte_pointer)&output;

    // Swap bytes 
    for (int i = 0; i < sizeof(int); i++ ){
        q[i] = p[sizeof(int) - i - 1 ];
    }

    return output;
}

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("A integer argument is needed to run this program.\nPlease try again.\n");
    return 1;
  }

  int input = (int)strtol(argv[1], NULL, 0);
  int output = swap_bytes(input);

  printf("%#lx\n", output);
}