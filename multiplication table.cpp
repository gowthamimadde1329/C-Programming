#include<stdio.h>
int main()
{
	int i,tn,ts;
	printf("enter table number and table size");
	scanf("%d%d",&tn,&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d\n",i,tn,i*tn);
	}
	return 0;
}
