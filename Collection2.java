import java.util.*;
import java.io.*;

class Collection2
{
	public static void main(String args[])
	{
		LinkedList<Integer> list = new LinkedList<Integer>();		
		LinkedList<Integer> listcopy = new LinkedList<Integer>();		
		list.add(1);
		list.add(2);
		System.out.println(list.size());
		listcopy = (LinkedList)list.clone();		
		list.clear();			
		System.out.println(list.size());
		
		
		System.out.println(listcopy.size());
	}

}
