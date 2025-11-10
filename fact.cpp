#include<stdio.h>
int main()
{
   int d,rev=0,n,temp;
   printf("enter any number");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
   	 d=n%10;
   	 rev=(rev*10)+d;
     n=n/10;
   }
   if(temp==rev)
       printf("it is a palindrome");
   else
       printf("it is not a palindrome");
   return 0;
}
