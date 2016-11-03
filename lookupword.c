#include "lookupword.h"
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "./web1913.txt"
//TODO: USE mmap implementation
char* parse_for_definition(FILE* dictionary_file, char* word);

char* definition_of(char* word)
{
  char* definition = "test";
  FILE* dictionary_file;//initialised to garbage 
  //Connect to file
  
  dictionary_file = fopen(FILENAME,"r");
  if(dictionary_file==NULL)
  {
    puts("Could not access dictionary file\n");
    exit(1);
  }
  definition = parse_for_definition(dictionary_file, word);
  fclose(dictionary_file);
  return definition;
}

char* parse_for_definition(FILE* dictionary_file, char* word)
{
  char* word_definition = "test2";
  return word_definition;
}