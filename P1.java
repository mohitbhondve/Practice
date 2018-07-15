
import java.io.*;
import java.lang.*;

abstract class Demo
{
	Demo()
	{
		System.out.println("Demo");
	}
}

class Hello extends Demo
{
	Hello()
	{
		System.out.println("Hello");
	}

}

class P1
{
	public static void main(String args[])
	{
		Hello obj = new Hello();
		Demo obj1 = new Hello();

	

	}

}
