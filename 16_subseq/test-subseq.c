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
  int array8[] = {-2,-1,0};
  int array9[] = {1};
  int array10[] = {1,2,3,99,-4,-10,0,1};
  //  int array11[] = {};


     
  if(maxSeq(array0,10) != 4)
  return EXIT_FAILURE;
     
  
   if(maxSeq(array1,7) != 1)
   return EXIT_FAILURE;
        
  
  if(maxSeq(array2,5) != 1)
  return EXIT_FAILURE;
  
    
   if( maxSeq(array3,4) != 2)
   return EXIT_FAILURE;
   
  
   
  if(maxSeq(array4,4) != 1)
  return EXIT_FAILURE;
   

  if( maxSeq(array5,6) != 6)
  return EXIT_FAILURE;
    

  if(maxSeq(array6,8) != 2)
  return EXIT_FAILURE;
  
  
  if( maxSeq(array7,10) != 6)
  return EXIT_FAILURE;
  
  
  
  if(maxSeq(array8,3) != 3)
  return EXIT_FAILURE;
   
    
  if(maxSeq(array9,1) != 1)
  return EXIT_FAILURE;
   
  if(maxSeq(array10,8) != 4)
  return EXIT_FAILURE;
  
   
  //  if(maxSeq(array11,0) != 0)
  //  return EXIT_FAILURE;

  return EXIT_SUCCESS;
      
}
