//4. Write a program to find the largest among three numbers.

//Level01

#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three different integers:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    if(a>c) printf("largest integer is %d",a);
    else if(a<c) printf("largest integer is %d",c);
  }
  else if(b>c) printf("largest integer is %d",b);
  else printf("largest integer is %d",c);
return 0;
}
