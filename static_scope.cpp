#include<stdio.h>
void func();
int main()
{
	static int a=10;
	int c=9;
	int & d=c;//d is alias of c
	c=13;
	//d=13; produces the same result
	printf("a=%d\n",a);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	func();
	return 0;
}
void func()
{
	static int a=9;
	printf("%d",a);
}
