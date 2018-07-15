#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node
{
	int Data;
	struct Node *Next;

}NODE,*PNODE,**PPNODE;

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL Insert(PPNODE,int);
BOOL DeleteFirst(PPNODE);
BOOL InsertLast(PPNODE,int);
BOOL DeleteLast(PPNODE);
void Display(PNODE);
int Count(PNODE);
BOOL InsertAtPos(PPNODE,int,int);
BOOL DeleteAtPos(PPNODE,int);

int main()
{
	PNODE Head = NULL;
	BOOL bret = TRUE;
	int ret = 0,cnt=0;

	bret = InsertFirst(&Head,11);
	bret = InsertFirst(&Head,21);
	bret = InsertFirst(&Head,51);
	
	Display(Head);
	cnt = Count(Head);

	printf("\nCount  = %d\n",cnt);
	printf("\n\n");

	//DeleteFirst(&Head);
	//Display(Head);

	bret = InsertLast(&Head,101);
	Display(Head);
	printf("\n\n");

	//bret = DeleteLast(&Head);
	//Display(Head);
	printf("\n\n");

	bret = InsertAtPos(&Head,111,2);
	Display(Head);	
	printf("\n\n");

	bret = DeleteAtPos(&Head,3);
	Display(Head);
	printf("\n\n");

	return 0;
}

BOOL InsertFirst(PPNODE first,int No)
{
	PNODE Newn = NULL;
	
	Newn = (PNODE)malloc(sizeof(NODE));

	if(Newn == NULL)
	{
		return FALSE;
	}	

	Newn->Data = No;
	Newn->Next = NULL;
	
	if(*first == NULL)
	{
		*first = Newn;
	}
	else
	{
		Newn->Next = *first;
		*first = Newn;
	}

	return TRUE;
}

void Display(PNODE first)
{
	while(first !=NULL)
	{
		printf("%d\t",first->Data);
		first = first->Next;
	

	}	

}

int Count (PNODE first)
{
	int cnt;
	while(first != NULL)
	{
		cnt++;
		first = first->Next;
	}	

	return cnt;

}

BOOL DeleteFirst(PPNODE first)
{
	PNODE Temp = *first;
			
	if(*first == NULL) // LL EMPTY
	{
		return;
	}
	else
	{
		*first = (*first)->Next;
		free(Temp); 
	}
	
}

BOOL InsertLast(PPNODE first,int no)
{
	PNODE Newn = NULL;
	PNODE Temp = NULL;
	Newn = (PNODE)malloc(sizeof(NODE));
	
	if(Newn == NULL)	
	{
		return FALSE;
	}	
	
	Newn->Data = no;
	Newn->Next = NULL;


	if(*first == NULL)
	{
		*first = Newn;
	}	
	else
	{
		Temp = *first;
		
		while(Temp->Next != NULL)
		{
			Temp = Temp->Next;
		}

		Temp->Next = Newn;
	}
}


BOOL DeleteLast(PPNODE first)
{
	PNODE Temp = NULL;
	
	Temp = *first;

	if(*first == NULL)
	{
		return FALSE;
	}
	else
	{
		while(Temp->Next->Next != NULL)		
		{
			Temp = Temp->Next; 
		}

		free(Temp->Next);
		Temp->Next = NULL;
	}
	return TRUE;
}

BOOL InsertAtPos(PPNODE first,int No,int Pos)
{
	int count = Count(*first);
	PNODE Newn = NULL;
	int i;
	PNODE Temp = *first;


	
	if((Pos < 0) || (Pos > count+1))
	{
		return FALSE;
	}
	
	if(Pos == 1)
	{
		return(InsertFirst(first,No));
	}
	else if(Pos == (count+1))
	{
		return(InsertLast(first,No)); 
	}
	
	else
	{
		Newn = (PNODE)malloc(sizeof(NODE));
	
		if(Newn == NULL)
		{
			return FALSE; 
		}			

		Newn->Data = No;
		Newn->Next = NULL;

		for(i=1;i<=(Pos-2);i++)
		{
			Temp = Temp->Next;
		}

		Newn->Next = Temp->Next;
		Temp->Next = Newn;
	}
	return TRUE;

}

BOOL DeleteAtPos(PPNODE first,int Pos)
{
	int count = Count(*first);
	int i=0;
	PNODE Temp1 = *first;
	PNODE Temp2 = NULL;

	if(( Pos < 1 ) || ( Pos > count ))
	{
		return FALSE;				
		
	}
	
	if(Pos == 1)
	{
		return (DeleteFirst(first));
	}
	else if (Pos == count)
	{
		return (DeleteLast(first));
	}
	else
	{
		for(i=0;i<=(Pos-2);i++)
		{
			Temp1 = Temp1->Next;
		}
		
		Temp2 = Temp1->Next;
		Temp1->Next = Temp2->Next;
		free(Temp2); 

	}

	return TRUE;
}


