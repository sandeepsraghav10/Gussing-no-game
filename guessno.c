// Guess random number

#include<stdio.h>
#include<stdlib.h>

int main()
{
        int guess,number=50;
	number=rand()%100+1;
	
        printf("Welcometo world of guessing numbers \n");
        
	do{
	       // printf("%d\n",number);
		printf("Enter your guess between 1 to 100\n");
		scanf("%d",&guess);
		
		if(guess<number)
		{
			printf("number greater is than %d\n",guess);
		}else if(guess>number){
			printf("number smaller is than %d\n",guess);
		}else if(guess==number)
		{
			printf("Congratulations you have guessed the Number : %d \n",guess);
		}
	}while(guess!=number);

	return 0;
}
