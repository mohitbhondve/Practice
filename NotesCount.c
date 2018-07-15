#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int RS,No,i,count=0;
	printf("Enter Rupees:-\t");
	scanf("%d",&RS);

	int arr[] = {10,5,2,1},brr[4]={'\0'};
	
	for(i=0;i<4;i++)
	{
			No = RS / arr[i];
			brr[i] = brr[i] + No;						
			RS = RS - (No * arr[i]);		
			count++;
	}

	
	printf("count  = %d\n",count);
	for(i=0;i<4;i++)
	{
		printf("%d Rs\t:%d Notes\n",arr[i],brr[i]);
		printf("-----------------------------------\n");
	}
}
