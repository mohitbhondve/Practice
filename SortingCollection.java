import java.io.*;
import java.lang.*;
import java.util.*;


class Student implements Comparable<Student>
{
	public int id;
	public String name;
	public int age;

	Student()
	{	
		this.id = 0;
		this.name = "";
		this.age=0;
	}
	
	Student(int id,String name,int age)
	{
		this.id = id;
		this.name = name;
		this.age = age; 
	}
	
	public int compareTo(Student s)
	{
		if(name.equals(s.name))
			return 0;
		else if(name.compareTo(s.name) > 0)
			return -1;
		else
			return 1;		
	}	

}

class SortingCollection
{
	public static void main(String args[])
	{
		
		Student sobj1 = new Student(1,"Mohit",22);
		Student sobj2 = new Student(2,"Nilya",23);
		Student sobj3 = new Student(3,"Dhanya",21);
		ArrayList<Student> al = new ArrayList<Student>();
		al.add(sobj1);
		al.add(sobj2);
		al.add(sobj3);

		Collections.sort(al);
		
		for(Student s : al)
		{
			System.out.println(s.id +"\t"+s.name +"\t"+ s.age);
		}		
		
	}

}
