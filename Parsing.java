//input = (a+(b+c))+(b*c)
//output =1  2   21 3   3

import java.io.*;
import java.lang.*;
class Parsing
{
	public static void main(String args[]) throws Exception
	{
		String s= "(";
		String s1= ")";

		String str = "(a+(a+b))+(c*d)";
		String splitStr[] = str.split("\\(");

		for(int i = 1 ; i< splitStr.length ; i++)
		{		
			splitStr[i] = s.concat(splitStr[i]);// 	(a+   (a+b))+    (c*d)
		}		
		
		for(int i=1 ; i< splitStr.length ; i++) // 3 times 
		{
			int temp = i; 
			System.out.print(i+"\t");   //(c*d)
			
			if(splitStr[i].contains(")"))
			{
				String splitStr1[] = splitStr[i].split("\\)");// (c*d
				
				for(int j = 0 ; j < splitStr1.length ; j++)
				{		
					splitStr1[j] = s1.concat(splitStr1[j]); // )(c*d
				}
				for(int k = 0 ; k < splitStr1.length ; k++)  // 
				{
					System.out.println(temp+"\t");
					temp--;
				}
			}
		}		
	} 
}
