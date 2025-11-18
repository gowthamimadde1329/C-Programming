#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r,C,i,j;
	printf("enter matrix rows and columns values");
	scanf("%d%d",&r,&C);
	printf("enter A matrix value");
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix value");
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<C;j++)
	  	{
	  		c[i][j]=a[i][j]+b[i][j];
		}
	  }
	    printf("result matrix is\n");
	    for(i=0;i<r;i++)
	    {
	    	for(j=0;j<C;j++)
	    	{
	    		printf("%d",c[i][j]);
			}
			  printf("\n");
		}
		  return 0;
}
