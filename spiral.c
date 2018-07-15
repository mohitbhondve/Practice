#include<stdio.h>
#define ROW 4
#define COL 4

void spiralMatrix(int arr[ROW][COL])
{
	 /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
	
	int k=0,m=4,l=0,n=4,i;

	while( k < m && l < n)
	{
		for(i=l ; i<n; i++)
		{
			printf("%d\t",arr[k][i]);
		}	
		k++;

		for(i=k; i<m;i++)
		{
			printf("%d\t",arr[i][n-1]);
		}
		
		n--;
		
		
		for(i=n-1; i>=l; i--)
		{
			printf("%d\t",arr[m-1][i]);
		}
		m--;

		for(i=m-1; i>=k ; i--)
		{
			printf("%d\t",arr[i][l]);
		}
		
		l++;
			
		
	}
	
	


}

int main()
{
	int i,j;
	int arr[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	spiralMatrix(arr);

	return 0;

}

