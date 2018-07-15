#include<stdio.h>

void spiralPrint(int m,int n,int a[4][4])
{
	int i,k=0,l=0;

	/*
		k- starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator 
	*/

	while( k < m && l < n )
	{
		for( i =k; i<n; ++i)
		{
			printf("%d ",a[k][i]);		
		}
		k++;
		
		for( i=k;i<m;++i)
		{
			printf("%d ",a[i][n-1]);
		}		
		n--;

		if( k < m)
		{
			for(i = n-1; i>=l;i--)
			{
				printf("%d ",a[m-1][i]);
			}
		}
		m--;

		if( l < n)
		{
			for(i = m-1;i >=k;i--)
			{
				printf("%d ",a[i][l]);							
			}

		}
		l++;
	}
}

int main()
{
	int a[4][4] = {
			 {1,2,3,4},
			 {5,6,7,8},
			 {9,10,11,12},
			 {13,14,15,16}
		     };

	spiralPrint(4,4,a);
	return 0; 

}












