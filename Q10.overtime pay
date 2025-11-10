/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the
rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that
employees do not work for fractional part of an hour.*/

//Level 01

#include <stdio.h>
int main()
{
  int hours,sum=0;
  for(int i=1;i<=10;i++)
  {
    printf("Enter work hours of Emploee%d\n",i);
    scanf("%d",&hours);
    if(hours>40)
    {
      hours=hours-40;
      printf("Overtime pay for Employee%d is inr%d\n",i,hours*120);
      sum+=hours*120;
    }
    else printf("No overtime pay for Employee%d\n",i);
  }
  printf("Total overtime pay for 10 Employees is inr%d\n",sum);
}
