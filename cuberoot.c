#include<stdio.h>
int main()
{
	int a=2,b=5,c;
	//(a+b)^3 = a^3+b^3+3*a*b+3*a^2*b;
	c = a*a*a+b*b*b+3*a*a*b+3*a*b*b;
	printf("(2+5)^3 = %d ",c);
	return 0;
}
