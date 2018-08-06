#include <stdlib.h>
#include <stdio.h>

struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
} ;
typedef struct _retire_info retire_info;
void retirement (int startAge, double initial, retire_info working, retire_info retired)
{int i, year,month;
  double balance;
  balance = initial;
  for(i=0; i <= working.months; i++)
    {
      year = startAge/12;
      month = startAge - year*12;
      printf("Age %3d month %2d you have $%.2lf\n",year,month,balance);
      if( i == working.months)
	break;
      balance = balance + balance*(working.rate_of_return/12) + working.contribution;
      
      startAge++; 
    }
  startAge++;
    for(i=0; i < retired.months-1; i++)
    {
      year = startAge/12;
      month = startAge - year*12;
      
      balance = balance + balance*(retired.rate_of_return/12) - retired.contribution;
        printf("Age %3d month %2d you have $%.2lf\n",year,month,balance);
      
      startAge++; 
    }
}

int main()
{
  int startAge = 327;
  double initial = 21345;

  retire_info working, retired;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045;
  retired.months = 384;
  retired.contribution= 4000;
  retired.rate_of_return = 0.01;
  
  retirement(startAge,initial,working,retired);

  return 0 ;
}
