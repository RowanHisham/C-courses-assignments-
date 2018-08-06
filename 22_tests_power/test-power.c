#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned power (unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans)
{
  if(expected_ans != power(x,y))
    exit(EXIT_FAILURE); 
}

int main ()
{
  unsigned x,y,ans;
  x = 0;
  y = 0;
  ans = 1;
  run_check(x,y,ans);

  x = 0;
  y = 1;
  ans = 0;
  run_check(x,y,ans);

  x = 1;
  y = 1;
  ans = 1;
  run_check(x,y,ans);


  x = -2;
  y = 3;
  ans = -8;
  run_check(x,y,ans);

} 
