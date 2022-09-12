//A simple game to guess the number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number, guess, nguess=1;
	number= rand() %100 + 1; //To generate a random number betwwen 1 and 100 
	srand(time(0));
	//To run the times of guesses
	do{
		printf("Guess the number between 1 to 100-\n");
		scanf("%d",&guess);
		if(guess<number){
			printf("Guess Higher Number Please!\n");
		}
		else if(guess>number){
			printf("Guess Lower Number Please!\n");
		}
		else{
			printf("You took %d attempts to guess the number!\n",nguess);
		}
		nguess++;
	}while(nguess!=number);
	return 0;
}
