#include <stdio.h>
#include <string.h>
int main(){
 	char name[20];
 	printf("Enter your name: \n");
 	fgets(name,sizeof(name),stdin);

//getting rid of \n due to 'enter' used to submit input
//strcspn(variable,"char") checks for the particular char(in this case "\n") in variable(in this case 'name') and returns its position in the string.

 	name[strcspn(name,"\n")]='\0';

 	int c=strlen(name);
 	printf("your name contain %d charcter",c);
return 0;
}
 
/*Problem with this:
The Final count still includes the spaces in the name.*/
