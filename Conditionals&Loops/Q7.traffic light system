//7. Write a program using switch case to demonstrate traffic light system.

//Level01

#include <stdio.h>
int main()
{
  char color;
  start:
  printf("Want information on ______ light??\nRed(R)\nOrange(O)\nGreen(G)\n");
  scanf(" %c",&color);
  switch(color)
  {
    case 'R':
    case 'r':
      printf("You need to stop!!\n");
    break;
    case 'O':
    case 'o':
      printf("Stay alert and move slowly\n");
    break;
    case 'G':
    case 'g':
      printf("You can proceed.\n");
    break;
    default:
      printf("Choose from R//O//G\n");
      goto start;
    break;
  }
return 0;
}
