//Write a program to print the length of a string.

#include <stdio.h>
#include <string.h>
int main(){
    char name[10];
    printf("Enter your name: \n");
    scanf("%s",name);
    int c=strlen(name);
    printf("%d",c);
return 0;
}

/*Problem with this:
scanf() gets only first word as input, not anything after \0(space).
what if user inputs surname as well. 
fgets() comes into play*/
