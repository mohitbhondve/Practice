
import java.io.*;
import java.lang.*;
import java.util.*;

class LinkedListDemo
{
	public static void main(String args[])
	{
		LinkedList<Integer> ll = new LinkedList<Integer>();
		
		ll.add(0,10);
		ll.add(20);
		ll.addFirst(30);
		ll.add(1,40);
		ll.addLast(50);

		System.out.println(ll.contains(340)); // false

		Iterator itr = ll.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
	
	}

}
