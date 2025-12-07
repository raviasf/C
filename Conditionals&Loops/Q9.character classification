/*1. Using conditional operators determine:
a) Whether the character entered through the keyboard is a lowercase or uppercase alphabet.
b) Whether a character entered through the keyboard is a special symbol or not.*/

//Level01

#include <stdio.h>
int  main()
{
  char input;
  int ascii;
  printf("Enter any character on your keyboard:\n");
  scanf("%c",&input);
  ascii = input;
//integer ascii values {48-57}
  if(ascii>=48 && ascii<=57) printf("Its an integer.\n");
//uppercase letter ascii values {65-90}
  else if(ascii>=65 && ascii<=90) printf("Its a uppercase letter.\n");
//lowercase letter ascii value {97-122}
  else if(ascii>=97 && ascii<=122) printf("Its a lowercase letter.\n");
  else printf("Special character.\n");
return 0;
}
