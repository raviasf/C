/*5. Write a program to check whether three given side lengths can form a triangle or not. If yes,
classify it as: Equilateral, Isosceles or Scalene. Also, check if it is a valid triangle (Triangle
inequality theorem).*/

//Level01

#include <stdio.h>
int main()
{
  float a,b,c;
  printf("Enter three sides of the triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c && b+c>a && c+a>b) 
  {
    printf("Triangle of given sides exists\n");

//To classify the triangle(if exists)

    if(a==b && b==c) printf("Its an Equilateral triangle\n");
    else if(a!=b && b!=c && c!=a) printf("Its an scalene triange\n");
    else printf("Its an isoceles triangle\n");
  }
  else printf("Triangle with given sides do not exist\n");
return 0;
}
