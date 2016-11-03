#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lookupword.h"

int main (int argc, char** argv)
{  
  char* definition_of_word, *input_word;
  if(argc != 2)
  {
    puts("program requires only/at least one argument\n");
    exit(1);
  }
  input_word = argv[1];
  definition_of_word = definition_of(input_word);
  
  printf("%s\n", definition_of_word);
  return 0;
}