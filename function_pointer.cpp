#include<iostream>
using namespace std;
//a function returning pointer
int *sum(int x,int y)
{
	int *temp,s;
	temp=&s;//first allocate address to pointer the reverse would not work....
	*temp=x+y;
	//temp=&s;
	return temp;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<*sum(a,b);
	int *(*(fun_ptr))(int x,int y);//pointer to a function returning pointer
	//we can also declare a array of function pointers...
	fun_ptr=&sum;
	cout<<"\nfunction pointer->"<<*fun_ptr(2,3);
	return 0;
}
