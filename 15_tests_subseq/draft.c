#include <stdio.h>
#include <stdlib.h>
size_t maxSeq(int * array, size_t n);

int main()
{
  int array0[] = { 1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  int array1[] = {1,1,1,1,1,1,1}; 
  int array2[] = {10,9,7,2,0};
  int array3[] = {1,-2,3,-4};
  int array4[] = {-2,-3,-4,-5};
  int array5[] = {2, 4, 67, 93, 94, 102};
  int array6[] = {1,1,2,2,3,3,4,4};
  int array7[] = {1,2,3,-1,-2,4,5,6,7,8};
  int array8[] = {-4,-3,-2};
  int array9[] = {1};
  size_t num ;

  num = maxSeq(array0,10);
  if(num != 4)
  return EXIT_FAILURE;

  num = maxSeq(array1,7);
  if(num != 1)
  return EXIT_FAILURE;
        
  num = maxSeq(array2,5);
  if(num != 1)
  return EXIT_FAILURE;
    
  num = maxSeq(array3,4);
  if(num != 2)
  return EXIT_FAILURE;

  
  num = maxSeq(array4,4);
  if(num != 1)
  return EXIT_FAILURE;
  
  num = maxSeq(array5,6);
  if(num != 6)
  return EXIT_FAILURE;
  
  num = maxSeq(array6,8);
  if(num != 2)
  return EXIT_FAILURE;

  num = maxSeq(array7,10);
  if(num != 5)
  return EXIT_FAILURE;

   
  num = maxSeq(array8,3);
  if(num != 3)
  return EXIT_FAILURE;
   
  num = maxSeq(array9,1);
  if(num != 1)
  return EXIT_FAILURE;
  

  return EXIT_SUCCESS;
      
}
