import java.io.*;
import java.lang.*;

class Threading implements Runnable
{
	 public void run()
	{
		System.out.println(Thread.currentThread().getPriority());
		
		Thread.currentThread().setPriority(Thread.MIN_PRIORITY);

		System.out.println(Thread.currentThread().getPriority());
	}

	
	
	public static void main(String args[])
	{
		Threading t = new Threading();
		
		Thread obj = new Thread(t);
		Thread obj1 = new Thread(t);
		
		obj.start();
		obj1.start();
		obj.setPriority(Thread.MAX_PRIORITY);
		try
		{
			obj.join();
		}
		catch( InterruptedException e)
		{
			System.out.println(e);
		}
		//obj1.start();

		System.out.println(obj.getName());
		System.out.println(obj.getId());
		obj.setName("mohit");
		System.out.println(obj.getName());

		System.out.println(Thread.currentThread().getName());
	}

}
