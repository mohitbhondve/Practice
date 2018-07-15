
#include<iostream>

using namespace std;

 template < class T>

void add(T no1 , T no2)
{
	cout << no1 + no2 << "\n";
}


int main()
{
	add(10,20);

	add(10.20,20.40);

}
