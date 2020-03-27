#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%2==1)
	{
		printf("%d is odd number\n",a);
	}
	if(a%2==0)
	{
		printf("%d is even number",a);
	}
	/*
	else
	{
		printf("%d number is zero",a);
	}
	*/
	return 0;
}
