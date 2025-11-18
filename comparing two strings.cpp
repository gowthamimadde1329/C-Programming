#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,l1,l2,flag=0;
	printf("enter two strings names");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++)
	l1=i;
	{
		for(i=0;s2[i]!='\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	printf("both strings are equal");
	else 
	printf("both strings are not equal");
	return 0;
}
