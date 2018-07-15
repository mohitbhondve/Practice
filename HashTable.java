
import java.io.*;
import java.lang.*;
import java.util.*;

class HashTable
{
	public static void main(String args[])
	{
		Hashtable<Integer,String> ht = new Hashtable<Integer,String>();
		
		ht.put(1,"Mohit");
		ht.put(2,"Rohit");
		ht.put(3,"Ram");

		for(Map.Entry hm:ht.entrySet())
		{
			System.out.println(hm.getKey());
			
		}

		LinkedList<Integer> ll = new LinkedList<Integer>();
		ll.add(10);
		ll.add(20);
		
		
		Enumeration itr = Collections.enumeration(ll);
		
		while(itr.hasMoreElements())
		{
			System.out.println(itr.nextElement());		
		}
		
	}

}
