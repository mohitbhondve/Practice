import java.io.*;
import java.util.ArrayList;
import java.util.*;



class Arraylist
{
	public static void main(String args[])
	{
		ArrayList<Integer> lst = new ArrayList<Integer>(2);

		lst.add(11);
		lst.add(21);
		lst.add(31);


		Iterator itr = lst.iterator();

		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}		
		
	}

}
