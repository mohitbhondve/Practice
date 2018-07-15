import java.io.*;
import java.lang.*;

class Threading1 implements Runnable
{
	public void run()
	{
				if(Thread.currentThread().isDaemon())
				{
					System.out.println("daemon");
				}
				else
				{
					System.out.println(" not daemon");
				}
			

	}
	
	
	public static void main(String args[])
	{
		Threading1 obj = new Threading1();
		
		Thread t1 = new Thread(obj);
		t1.setDaemon(true);
		t1.start();
	}

}	
