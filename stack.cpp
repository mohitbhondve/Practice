#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;
template <class T>

class stack
{
	private:
		 int top;
		 int size;	
		 T* arr;
	public :
		
	stack();
	BOOL IsStackEmpty();
	BOOL IsStackFull();
	void Push(T);
	T Pop();
	void Display();
		

};
template <class T>
stack<T> :: stack()
{
	top = -1;
	size = 10;
	arr = new T(size);
}

template <class T>
BOOL stack<T>::IsStackEmpty()
{
	if(top == -1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

template <class T>
BOOL stack<T>::IsStackFull()
{
	if(top == size-1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;	
	}
}

template <class T>
void stack<T> :: Push(T data)
{
	if(IsStackFull() == TRUE)
	{
		return;
	}

	top++;
	arr[top] = data;
		

}
template <class T>
T stack<T> :: Pop()
{
	int value;
	value = arr[top];
	top--;
	return value;
}

template <class T>
void stack<T> :: Display()
{
	if(IsStackEmpty()==TRUE)
	{
		return;
	}
	
	for(int i=0; i<=top ; i++)
	{
		cout << arr[i] << "\n";
		
	}

}


int main()	
{
	stack<int> obj;
	int retvalue;
	obj.Push(10.33);
	obj.Push(20);
	obj.Push(30);
	obj.Push(40);
	obj.Display();
	
	retvalue = obj.Pop();
	cout << retvalue;
	obj.Display();
	
}
