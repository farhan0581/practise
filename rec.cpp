#include<stdio.h>
void func(int x);
int main()
{
	int a=20;
	func(20);
	return 0;
}
void func(int x)
{
	if(x==0)
	{
		printf("returned called by %d\n",x);
		return;
	}
	func(x-1);
	printf("%d ",x);
}
