/*Write a program to enter numbers till the user wants. At the end, it should display
the count of positive, negative and zeroes entered*/

//Level 01

#include <stdio.h>
int main()
{
  float number;
  int positive=0,negative=0,zero=0,temp;
  char choice;
  do{
    printf("Enter a number:\n");
    scanf("%f",&number);
    if(number>0) positive++;
    else if(number<0) negative++;
    else zero++;
    printf("Do you want to enter another number(Y//N)\n");
    scanf(" %c",&choice);
    temp=("%d",choice);
    }while(temp==121||temp==89);
  printf("Session terminated\nYou have entered:\n%d Positive numbers\n%d Negative numbers\n%d Zeroes\n",positive,negative,zero);
}
