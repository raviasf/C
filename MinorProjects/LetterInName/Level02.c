#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    printf("Enter your name:\n");
    fgets(name,sizeof(name),stdin);
    int c=strlen(name);
    printf("Your name contains %d characters",c);
}


/*Problem with this:
fgets includes the \n intended to submit the input.(The 'ENTER' you press at the end)
so count always 1+ the actual count*/
