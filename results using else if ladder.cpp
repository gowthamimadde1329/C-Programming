#include<stdio.h>
int main()
{
	int s1,s2,s3,t,p;
	printf("enter subjectwise marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	t=s1+s2+s3;
	p=t/3;
	if(s1>40&&s2>=40&&s3>=40)
	{
		if(p>=90)
		{
			printf("a grade");
		}
		else if(p>=70)
		{
			printf("b grade");
		}
		else if(p>=50)
		{
			printf("c grade");
		}
		else if(p>=40)
		{
			printf("d grade");
		}
	}
	else
	{
		printf("failed");
	}
	return 0;
}
