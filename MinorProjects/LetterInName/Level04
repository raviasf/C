#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
 	char name[20];
 	printf("Enter your name: \n");
 	fgets(name,sizeof(name),stdin);
//getting rid of \n due to 'enter' used to submit input
 
 	name[strcspn(name,"\n")]='\0';

//strcspn(variable,"char") checks for the particular char in variable and returns its position in the string.

 	int count=0;
 	for(int i=0;name[i]!='\0';i++){
 		if(isalpha((unsigned)name[i])){
 	        	count++;
 		}
 	}
 
 	printf("your name contain %d charcter",count);
return 0;
}
