#include<stdio.h>

int main()
{
	int r=4,c=4,i,j,k,l;
	int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	for(i=0;i<r;i++)
	{
		printf("%d\t",a[0][i]);
	}

	for(i=1;i<r;i++)
	{
		printf("%d\t",a[i][r-1]);
	}

	for(i=r-2;i>=0;i--)
	{
		printf("%d\t",a[r-1][i]);
	}

	for(i=(r-1);i>0;i--)
	{
		printf("%d\t",a[i][0]);
	}


	for(i=1;i<(r-1);i++)
	{
		printf("%d\t",a[1][i]);
	}

	for(i=2;i<=(r-2);i++)
	{
		printf("%d\t",a[i][r-2]);
	}


	for(i=(r-2);i>1;i--)
	{
		printf("%d\t",a[i][1]);
	}


	return 0;

}
