#include<stdio.h>
int main()
{
	long int i,n,fact;
	printf("enter n value");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorail=%ld",fact);
	return 0;
}
