
import java.io.*;

class Demo
{
	private int no =10;

	
	class Hello
	{
		void fun()
		{
			no = no + 10;
			System.out.println(no);
		}

	}

}

class InnerClass
{
	public static void main(String args[])
	{
		Demo obj= new Demo();
		Demo.Hello obj1 = obj.new Hello();
		obj1.fun();	
		
		
	}
}
