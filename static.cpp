//depecting static members
#include<iostream>
using namespace std;
class A
{
	private:
		static int a;
		int b;
	public:
		void fun()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		void init()
		{
			cout<<"enter\n";
			cin>>a>>b;//valid...if assign static some value then it would remain same for all objects
		}
};
int A::a=5;
int main()
{
	class A obj1,obj2,obj3;
	obj1.init();
	obj2.init();
	obj3.init();
	obj1.fun();
	obj2.fun();
	obj3.fun();
	return 0;
}
