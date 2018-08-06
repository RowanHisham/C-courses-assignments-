#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
