#include<stdio.h>
#include<stdlib.h>

#define ELEMENT_SIZE(x) sizeof(x[0])
#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int compareInt(const void *a,const void *b)
{
	int x = *(const int *)a;
	int y = *(const int *)b;
	
	if(x < y)
		return -1;
	else if(x > y)
		return 1;

	return 0;
		

}

int main(int argc, char *argv[])
{
	int iData[] = {40,10,100,90,20,25};
	
	int index = 0;
		
	printf("size = %d\n",sizeof(iData)/sizeof(iData[0]));
	printf("element size = %d\n",sizeof(iData[0]));

	qsort(iData,ARRAY_SIZE(iData),ELEMENT_SIZE(iData),compareInt);
	
	for(index = 0; index < ARRAY_SIZE(iData); index++)
	{
		printf("%d\t",iData[index]);
	}
	
	return 0;

}
