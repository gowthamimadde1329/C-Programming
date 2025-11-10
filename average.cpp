#include<stdio.h>
int main()
{
	int a,b,c,avg;
	printf("enter a and b and c values");
	scanf("%d%d%d",&a,&b,&c);
	avg=a+b+c/3.0;
	printf("avg of three numbers=%d",avg);
	return 0;
}
