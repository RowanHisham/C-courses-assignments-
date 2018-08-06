#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void counter(int *letters, int letter)
{
  if (isalpha((char)letter)) {
    letter -= 97;
    letters[letter]++;                
  }          
}

int maxLetter(int *letters)
{
  int max = letters[0];
  int index=0;
  for(int i=1; i<26; i++)
    {
      if(letters[i]>max)
	{
	  max = letters[i];
	  index = i;
	}      
    }
 
  if(index-4<0)
    return 26 + (index-4);
  return index-4;
}

int main(int argc, char **argv)
{
  if(argc != 2)
    {
      fprintf(stderr,"worng number of argument\n");
      return EXIT_FAILURE; 
    }
  
  FILE *data=fopen(argv[1],"r");
  
  if (data == NULL) {    
    fprintf(stderr,"can't open file\n");
    return EXIT_FAILURE;  
  }
  
  int letter;
  int letters[26] = {0};
  while( (letter = fgetc(data)) != EOF)
    {
      counter(letters, letter);
    }

  int key = maxLetter(letters);
  
  printf("%d\n",key);

  if (fclose(data) != 0) {    
    perror("Failed to close the input file!");    
    return EXIT_FAILURE;  
  }  
  return EXIT_SUCCESS;
}
