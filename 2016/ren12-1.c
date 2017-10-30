#include <stdio.h>

int main(int argc, char **argv)
{
  if( argc == 2 ) { 
    printf("OK\n");
  } else {
    printf("Usage: %s filename\n", argv[0]);
  }

  /* •Ê‰ð
  if( argc == 1 ){
     printf("Usage: %s filename\n", argv[0]);  
  } else {
     printf("OK\n");
  } */
  return 0;
}
