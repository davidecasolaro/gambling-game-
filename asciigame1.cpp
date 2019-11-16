#include<stdio.h>
#include<string.h>
main(){
	char l[100];
	int i;
	printf("enter word or sequence of characters: ");
	scanf("%s",l);
	for(i=0;i<strlen(l);i++){
		if(l[i]>=97&&l[i]<=122) l[i]=l[i]-32;
		else if(l[i]>=65&&l[i]<=90) l[i]=l[i]+32;
		else l[i]=42;
	}
	printf("your final result is: %s",l);
}

