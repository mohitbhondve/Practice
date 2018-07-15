
// (a+(b+c))+(d*c)
// 1  2   21 3   3

#include<stdio.h>
#include<string.h>


int main()
{
	char *str = "(a+(b+c))+(d*c)";
	
	
	int i = 1,Temp;

	while(str != "NULL")
	{
		
		if(*str == '(')
		{
			printf("%d\t",i);
			Temp = i;			
			i++;
			
		}
		if(*str == ')')
		{
			
			printf("%d\t",Temp);
			Temp--;
		}
			
		str++;			
	}
}
