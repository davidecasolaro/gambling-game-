#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,r;
	i=100;
	char ansq[50];
	printf("Hello, and welcome to the awesome world of GAMBLING! What's your name, champ?\n");
	scanf("%s",ansq);
	printf("Welcome, %s!\nThis game is all about chance. Answer correctly, and win BIG! Fail, and lose all your money.\n",ansq);
	r = rand()%36;
	printf("Your starting amount is 100$. If you can guess the number between 0 and 36 we randomly generated, you will win 36 big ones! ");
	printf("If not, you will lose 1$...sad.\nThought this wasn't enough? After each guess, we'll randomly generate a new number!\nTo begin, enter a number:\n");
	scanf("%d",&n);
	while(i>0)
	{
		if (n!=r)
		{
			printf("\noooh, too bad sonny! looks like you lose a buck!\n");
			i--;
		}
		else
		{
			printf("\n\nDING DING DING DING DING!!! You guessed it! you win 36 big ones!\n");
		    i+=36;
		}
		printf("\nYour current loot is %d$.\nDo you wish to try and strike oil once more, or escape with the loot?\nType 'escape' to end game or enter a new number to keep playing: ",i);
		scanf("%s",ansq);
		if (ansq[0]==101&&ansq[1]==115&&ansq[2]==99&ansq[3]==97&&ansq[4]==112&&ansq[5]==101)
		{
			printf("\n\nWhat a shame! Had you entered %d, you would've won!\nThanks for playing, anyway! Your final loot is %d$!\n",r,i);
			i=-2;
		}
		r=rand()%36;
	}
	if(i==0) printf("\n\nSorry! Looks like you lost all your money to gambling! Better luck next time, sport.");
	else{
		printf("bye!");
	}
}
