#include<stdio.h>
int main()
{
	int a=100,b=50,c=60;
	if(a>b&&a>c)
	{
		printf(" %d =: is the largest element\n",a);
    }  
    else if(b>a&&b>c)
    {
    	printf(" %d =: is the largest element\n",b);
    	
	}
	else
	{
		printf("%d is the largest element\n",c);
	}
	return 0;
}
