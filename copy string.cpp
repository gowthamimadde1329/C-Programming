#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 name");
	scanf("%s",&s1);
	strcpy(s1,s2);
	printf("Original string = %s",s1);
	printf("\nCopied string = %s",s2);
	return 0;
}
