//GuessGame

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int min=0;
    int max=50;
	srand(time(NULL));
	int c=(rand() % (max - min +1) + min),d;

//d = user input, c = the random number we get from system.

	printf("Guess the number:\n");
	do{
		scanf("%d",&d);
		if(d>c) printf("Not that big\n");
		else if (d<c) printf("Not that small\n");
	}while(c!=d);
	printf("Congratulations!! you got this");
}
