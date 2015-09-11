#include<iostream>
using namespace std;
class farhan
{
	private:
		farhan()
		{
			cout<<"hi";
		}
		~farhan()
		{
			cout<<"bye";
		}
};
int main()
{
	farhan obj;
	return 0;
}
