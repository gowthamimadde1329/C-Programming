#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice +add -sub mul* /div");
	scanf(" %c",&ch);
	switch(ch)
	{
	    case'+':printf("%d",a+b);
		        break;
	    case'-':printf("%d",a-b);
		        break;
	    case'*':printf("%d",a*b);
	            break;
	    case'/':printf("%d",a/b);
	            break;
	    default:printf("invalid statement");
	}
	return 0;
}
