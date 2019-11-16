#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	printf("enter the length of the 3 sides: ");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if((a<b+c)&&(b<a+c)&&(c<a+b))
	{
	 	if ((a==b)&&(b==c))
		{
		printf("equilateral triangle.");
	    }
		else if (a==b||b==c||c==a)
		{
		printf("this triangle is isosceles.");
		if (sqrt(a+b)==c||sqrt(b+c)==a||sqrt(a+c)==b)
		{
		printf("(triangle is also right.)");
		}
		}
		else if (a!=b&&b!=c&&c!=a)
		{
		printf("this triangle is scalene.\n");
		if (sqrt(a*a+b*b)==c||sqrt(b*b+c*c)==a||sqrt(a*a+c*c)==b)
		{
		printf("(triangle is also right.)");
		}
		}
		
	}
	else
	{
	printf("this triangle cannot exist.");
	} 
	
}
