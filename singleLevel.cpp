using namespace std;
#include<iostream>

class Base
{
	public:
		int i;
		static int j;

	void fun()
	{
		cout << "Inside fun";
		
	}		
};

class Derived : public Base
{
	public:
		int k;

	void gun()
	{
		cout << "Inside gun";
	}


};

int main()
{
	Base *obj1 = new Derived();
	
	

	return 0;
}
