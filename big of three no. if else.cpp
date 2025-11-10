#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b and values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is biggest");
		}
		else
		{
			printf("c is biggest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is biggest");
		}
		else
		{
			printf("c is biggest");
		}
	}
}
