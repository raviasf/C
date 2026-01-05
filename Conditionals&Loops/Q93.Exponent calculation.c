/*Input two number from the user. Write a program to find the value of one number
raised to the power of another.*/

//Level 01

#include <stdio.h>
int main()
{
  int a,b,result=1;
  printf("Enter a number:\n");
  scanf("%d",&a);
  printf("Enter the Power:\n");
  scanf("%d",&b);
  for (int i=b;i>0;i--)
  {
    result*=a;
  }
  printf("%d raised to power %d equals %d",a,b,result);
return 0;
}
