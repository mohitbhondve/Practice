
import java.io.*;
import java.lang.*;
import java.util.*;

class TreeMapDemo
{
	public static void main(String args[])
	{
		TreeMap<Integer,String> tm = new TreeMap<Integer,String>();

		tm.put(1,"Mohit");
		tm.put(2,"Rohit");
		tm.put(4,"Ram");
		tm.put(3,"Amol");

		for(Map.Entry entry : tm.entrySet())
		{
			System.out.println(entry.getKey() +"\t"+ entry.getValue());
		}
	}

}
