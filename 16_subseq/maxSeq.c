#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n)
{
  size_t size = 0;
  int counter = 1;

  if(n == 0)
    return size;
  if(n == 1)
    return 1;
 
  
  for(int i=1; i < n; i++)
    {
      if(array[i] > array[i-1])
      counter++;
      
      else
	{ if(counter > size)
	     size = counter;

	  counter = 1;
	     
	 }	 
    }	   

  if(counter>size)
    size = counter;
  
  return size;
}
