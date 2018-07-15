
#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

class Queue
{
	private:
		int front;
		int rear;
		int *arr;
		int size;

	public : 
		Queue();
		void EnQueue(int);
		int DeQueue();
		void Display();	
		BOOL IsQueueFull();	
		BOOL IsQueueEmpty();
};

Queue :: Queue()
{
	front = -1;
	rear = -1;
	size =10;
	arr = new int(size);
}

BOOL Queue :: IsQueueFull()
{
		if((rear == size-1)&&(front == 0) || (front == rear+1))
		return TRUE;	
		else
		return FALSE;
}

BOOL Queue :: IsQueueEmpty()
{
	if(front ==-1)
	return TRUE;
	else
	return FALSE;
}

void Queue :: EnQueue(int no)
{
	if(IsQueueFull() == TRUE)
	{
		return;
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		rear = (rear + 1) % size;
		arr[rear] = no;
	}	

}

int Queue :: DeQueue()
{
	int data;
	if(IsQueueEmpty() == TRUE)
	{
		return -1;
	}
	else
	{
		data = arr[front];
		front++;		
	}
	return data;
}
void Queue :: Display()
{
	for(int i=front ; i <=rear ; i++)
	{
		cout << arr[i] << "\t";
	}

}
int main()
{
	Queue obj;
	int data;
	obj.EnQueue(10);
	obj.EnQueue(20);
	obj.EnQueue(30);
	obj.EnQueue(40);

	obj.Display();

	data = obj.DeQueue();
	cout << "Poped Element id " << data ;

	obj.Display();
}








