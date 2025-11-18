#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,C1,r2,C2,i,j,k;
	printf("enter A matrix rows and columns");
	scanf("%d%d",&r1,&C1);
	printf("enter B matrix rows and columns");
	scanf("%d%d",&r2,C2);
	if(C1!=r2)
	{
		printf("matrix multiplication is not possible");
		exit(1);
	}
	  printf("enter A matrix value");
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<C1;j++)
	  	{
	  		scanf("%d",&a[i][j]);
		}
	  }
	    printf("enter B matrix value");
	    for(i=0;i<r2;i++)
	    {
	    	for(j=0;j<C2;j++)
	    	{
	    		scanf("%d",b[i][j]);
			}
		}
		  for(i=0;i<r1;i++)
		  {
		  	for(j=0;j<C2;j++)
		  	{
		  		c[i][j]=0;
		  		for(k=0;k<r2;k++)
		  		{
		  			c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		  }
		    printf("result matrix is\n");
		    for(i=0;i<r1;i++)
		    {
		    	for(j=0;j<C2;j++)
		    	{
		    		printf("%d",c[i][j]);
				}
				  printf("\n");
			}
			  return 0;
}
