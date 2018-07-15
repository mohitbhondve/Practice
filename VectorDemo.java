
import java.io.*;
import java.lang.*;
import java.util.*;

class VectorDemo
{
	public static void main(String args[])throws IOException
	{
		Vector<Integer> v = new Vector<Integer>();
			
		v.addElement(10);	
		v.addElement(20);
		v.addElement(30);


		ArrayList<Integer> a1 = new ArrayList<Integer>();
		a1.add(10);
		a1.add(20);
		a1.add(30);
		a1.add(40);
		a1.add(50);
		
		if(!a1.isEmpty())
		{
			System.out.println("Not empty");
			
		}
		
		System.out.println("hash code"+ a1.hashCode());
		
	}

}
