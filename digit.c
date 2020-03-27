#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the value:");
 scanf("%c",&ch);
 if(ch>='0'&&ch<='9')
 {
 	printf("%c is digit",ch);
 }
 else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
 {
 	printf("%c is alphabet",ch);
 }
 else
 {
 	printf("%c is a special characters",ch);
 }
 return 0;
}
