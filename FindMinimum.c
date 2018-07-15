/*
Input Array : [10, 0, -1, 20, 25, 30]
Required Sum: 45
Output: [20, 25]

Required Sum: 29
Output: [-1, 30]
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL findMinimum(int iArr[],int iNumber,int iSize)
{
	int iCnt1,iCnt2,iSum;
	BOOL bStatus = FALSE;	
	
	for(iCnt1 = 0; iCnt1 < iSize-1 ; iCnt1++)
	{
		for(iCnt2 = iCnt1+1; iCnt2 < iSize; iCnt2++)	
		{
			iSum = iArr[iCnt1]+iArr[iCnt2];
		
			
			if(iSum < 0)
			{
				iSum = -iSum;			
			}			

			if(iSum == iNumber)
			{				
				printf("%d = [ %d + %d ] \n",iNumber,iArr[iCnt1],iArr[iCnt2]);
				bStatus = TRUE;
			}
		}
	}
	return bStatus;
}

int main(int argc,char * argv[])
{
	int iNumber,iSize,i;
	BOOL bReturn; 
	char ch;
	int iArr[] = {10,0,-1,20,25,30};
	iSize = sizeof(iArr)/sizeof(iArr[0]);
	
	label:

	printf("Enter the required sum do you want to find : \t");
	scanf("%d",&iNumber);

	bReturn = findMinimum(iArr,iNumber,iSize);
	
	if(!bReturn)
	{
		printf("Required sum is not found in this array !\n");
	}
	
	printf("Continue...(y/n)");
	scanf(" %c",&ch);	
	
	
	switch(ch)
	{
		case 'y':
		case 'Y' : goto label;	
	}		
		
	printf("Exit..\n");

	return 0;
}
