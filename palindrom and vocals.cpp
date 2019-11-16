#include<stdio.h>
#include<string.h>
int palindrome(char seq[])
{
	int i;
	for(i=0;i<((strlen(seq)/2));i++)
	{
		if(seq[i]!=seq[strlen(seq)-i-1]) return 0;
	}
	return 1;
}

int vocal(char seq[])
{
	char vocals[]={'a','e','i','o','u'};
	int tot = 0;
	int n = 0;
	while(n<4)
	{
		for(int i=0;i<strlen(seq);i++){
			if (seq[i]==vocals[n]) tot++;
		}
		n++;
	}
	return tot;
}
main()
{
	char w[100];
	printf("enter word: ");
	scanf("%s",w);
	if (palindrome(w)) printf("'%s' is a palindrome.\n",w);
	else printf("%s is not a palindrome.\n",w);
	printf("'%s' is made up of %d vocals and %d consonants.",w,vocal(w),strlen(w)-vocal(w));
	
}
