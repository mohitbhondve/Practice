
import java.io.*;
import java.lang.*;

abstract class Demo
{
	Demo()
	{
		System.out.println("Demo");
	}

	Demo(int i)
	{
		System.out.println(i);
	}

}
class Hello extends Demo
{
	public Hello() 
	{
		super(10);
		System.out.println("Hello");
	}
	

}

class InterfaceDemo
{
	public static void main(String args[])
	{
		Hello obj = new Hello();	
		
		
	}

}

