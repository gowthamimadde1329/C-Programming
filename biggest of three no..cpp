#include<stdio.h>
int main()
{
	int a,b,c,biggest;
	printf("enter a and b and c values");
	scanf("%d%d%d",&a,&b,&c);
	biggest:(a>b?(a>c)?a:c:(b>c)?b:c);
	printf("biggest of three numbers=%d",biggest);
	return 0;
}
