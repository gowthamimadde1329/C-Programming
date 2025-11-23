#include<stdio.h>
void sum(int,int);
int main()
{
	int x=10,y=30;
	sum(x,y);
	return 0;
}
  void sum(int x,int y)
  {
  	int z;
  	z=x+y;
  	printf("sum=%d",z);
  }
