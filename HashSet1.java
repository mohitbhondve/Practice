
import java.util.*;

class HashSet1
{
	public static void main(String args[])
	{
		Set<String> st = new HashSet<String>();
		st.add("java");
		st.add("c");
		st.add("cpp");
	
		System.out.println(st);


		Set<String> st1 = new TreeSet<String>(st);
		System.out.println(st1);
	}

}
