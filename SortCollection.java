import java.io.*;
import java.util.*;
import java.lang.*;


class Student implements Comparable<Student>
{
	public String name;
	public int id;
	public int marks;

	public Student(String name,int id,int marks)
	{
		this.name = name;	
		this.id = id;
		this.marks = marks;
	}

	public int compareTo(Student s)
	{
		return this.marks - s.marks;
	}

	public String toString()
	{
		return "name:"+name+""+
			"\nid"+id+""+
			"\nmarks"+marks;
	}
	

}

class SortCollection
{
	public static void main(String args[])
	{
		Student obj1 = new Student("mohit",1,33);
		Student obj2 = new Student("ram",2,55);
		Student obj3 = new Student("dams",3,23);

		ArrayList <Student>aobj = new ArrayList<Student>();

		aobj.add(obj1);
		aobj.add(obj2);
		aobj.add(obj3);

		Collections.sort(aobj,Collections.reverseOrder());	
		

		System.out.println(aobj);
	}

}

