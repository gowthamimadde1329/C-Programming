#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,l;
	printf("enter two strings names");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++)
	{
		l=i;
    }
	for(i=0;s2[i]!='\0';i++)
	{
		s1[l++]=s2[i];
	}
	s2[l]='\0';
	printf("merge string=%s",s1);
	return 0;
}
