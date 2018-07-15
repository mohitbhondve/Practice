
import java.io.*;
import java.util.*;

class Student  implements Comparable<Student>
{
	int iId;
	String sName;
	double fMarks;
	
	Student(int Id, String Name, double Marks)
	{
		this.iId = Id;
		this.sName = Name;
		this.fMarks = Marks;
	}

	public int compareTo(Student s)
	{
		return (int)(this.fMarks - s.fMarks);

	}
}

class StudentLinkedList
{
	public static void main(String args[])
	{
		Student s1 = new Student(1,"Mohit",78.33);
		Student s2 = new Student(2,"Rohit",28.33);
		Student s3 = new Student(3,"Ram",58.33);

		
		ArrayList<Student> al = new ArrayList<Student>();

		al.add(s1);
		al.add(s2);
		al.add(s3);

		Iterator itr = al.iterator();
		for(int i =0;itr.hasNext();)
		{
			
			Student st = (Student)itr.next();
			
			System.out.println(st.iId+"\t"+st.sName+"\t"+st.fMarks);		
		}		

		Collections.sort(al);

		itr = al.iterator();
		for(int i =0;itr.hasNext();)
		{
			
			Student st = (Student)itr.next();
			
			System.out.println(st.iId+"\t"+st.sName+"\t"+st.fMarks);		
		}		



		System.out.println("RetainAll");

		ArrayList<String> a1 = new ArrayList<String>();
		
		a1.add("Rohit");
		a1.add("Ram");
		a1.add("Nilya");

		ArrayList<String> a2 = new ArrayList<String>();

		a2.add("Ram");
		a2.add("Mohit");
				

		a1.retainAll(a2);
		
		Iterator i = a1.iterator();
		while(i.hasNext())
		{
			System.out.println(i.next());
		}
		




















	}

}
