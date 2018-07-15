
import java.io.*;
import java.lang.*;
import java.util.*;

class ArrayListDemo
{
	public static void main(String args[])
	{
		ArrayList<Integer> AL = new ArrayList<Integer>();
		AL.add(0,10); // add using index
		AL.add(20); // without using index
		AL.add(30);
		AL.add(20);
		
		Iterator itr = AL.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}

		System.out.println("lastIndexOf : "+ AL.lastIndexOf(20)); // 3
		System.out.println("lastIndexOf : "+ AL.lastIndexOf(15)); // -1
		
		Object o[] = AL.toArray(); // convert Array list object into array object
		for(int i=0; i < o.length ; i++)
		{
			System.out.println(o[i]);
		}


		// use foreach loop to iterate list
		System.out.println("For Each Loop\n\n");
		for(int i : AL)
		{
			System.out.println(i);
		}
		
	}

}
