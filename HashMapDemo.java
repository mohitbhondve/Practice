
import java.io.*;
import java.lang.*;
import java.util.*;

class HashMapDemo
{
	public static void main(String args[])
	{
		HashMap<Integer,String> hm = new HashMap<Integer,String>();
		
		hm.put(null,"Mohit");
		hm.put(1,"Mohit");

		for(Map.Entry i:hm.entrySet())
		{
			System.out.println(i.getKey()+"\t"+i.getValue());

		}


		System.out.println(hm.get(null));
				
	
	}

}
