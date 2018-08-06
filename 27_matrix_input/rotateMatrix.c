#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void rotate(char matrix[10][10])
{
  char arr[10][10];
  int y = 10;

  for(int i=0; i<10; i++)
    {
      y--;
      for(int j=0; j<10; j++)
	{
	  arr[j][y] = matrix[i][j];
	}
    }

  for(int i=0; i<10; i++)
    {
      for(int j=0; j<10; j++)
	{
	  matrix[i][j] = arr[i][j];
	}
    }
}

int main(int argc, char** argv)
{
  if(argc != 2)
    {
      fprintf(stderr,"wrong number of arguments\n");
      return EXIT_FAILURE;
    }

  FILE *input = fopen(argv[1],"r");
  if(input == NULL)
    {
      fprintf(stderr,"couldn't open file\n");
      return EXIT_FAILURE;
    }
  FILE *input2 = fopen(argv[1],"r");
  if(input == NULL)
    {
      fprintf(stderr,"couldn't open file\n");
      return EXIT_FAILURE;
    }
  
  int i,k,c=0;
  char string[11];
  char matrix[10][10];
  for(int x=0; x<=111; x++)
    {if((c=fgetc(input2)) == EOF){
	if(x<110){
	  fprintf(stderr,"wrong input");
	  return EXIT_FAILURE;}
	if(x==110)
	  break;
      }
      if(x>110){
	fprintf(stderr,"wrong input");
	  return EXIT_FAILURE;}    
    }
  c=0;
  
  for( i=0; i<10; i++){
    if(c==EOF)
      break;
      for( k=0; k<=10; k++){
	if( (c=fgetc(input)) != EOF)
	  string[k] = c;
      }
      if(k != 11)
	{
	  fprintf(stderr,"wrong input");
	  return EXIT_FAILURE;
	}
      if(k>10 && string[10] != '\n'){
	  fprintf(stderr,"wrong input");
	  return EXIT_FAILURE;
	}
      	if(strchr(string,'\n') != &string[10])
	  {
	    fprintf(stderr,"wrong input");
	    return EXIT_FAILURE;
	  }
       	for(int j=0; j<10; j++)
	  {
	    matrix[i][j] = string[j];
	  }
  }
  if(i != 10)
    {
	    fprintf(stderr,"wrong input");
	    return EXIT_FAILURE;
     }
   
  rotate(matrix);

  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++)
      printf("%c",matrix[i][j]);    
    printf("\n");
  }
}
