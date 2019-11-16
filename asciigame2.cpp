#include<stdio.h>
#include<string.h>
main(){
	char l[100];
	printf("enter sequence: ");
	scanf("%s",l);
	for (int i=0;i<strlen(l);i++){
		if(l[i]>=97&&l[i]<=122) l[i]=42;
	}
	printf("\nyour final sequence is: %s",l);
}
