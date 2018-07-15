
import java.io.*;
import java.lang.*;

class ExceptionDemo
{
	public static void main(String args[]) throws IOException
	{
		try
		{
			Exception me = new Exception("Exception in try block");
			throw me;
		}	
		catch(Exception me)
		{
			System.out.println(me);
		}
		
	}	
	
}
