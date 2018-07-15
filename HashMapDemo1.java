
import java.io.*;
import java.lang.*;
import java.util.*;

class HashMapDemo1
{
	public static void main(String args[])
	{
		HashMap<Integer,String> hm = new HashMap<Integer,String>();

		hm.put(1,"Mohit");
		hm.put(2,"Rohit");
		hm.put(3,"Ram");

		hm.remove(2);
		for(Map.Entry me : hm.entrySet())
		{
			System.out.println(me.getValue() +"\t"+ me.getKey());
		}


		Set s = hm.entrySet();

		Iterator itr = s.iterator();
		while(itr.hasNext())
		{
			Map.Entry entry = (Map.Entry)itr.next();

			
			System.out.println(entry.getKey()+"\t"+entry.getValue());
		}




		System.out.println("===================================");








	}
}
