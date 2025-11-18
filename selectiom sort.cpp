#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(i=i+1;i<n;i++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted array in");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
