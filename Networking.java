import java.io.*;
import java.lang.*;
import java.net.*;


class Networking
{
	public static void main(String args[])throws Exception
	{
		URL obj = new URL("http://facebook.com/login.html");

		System.out.printf(obj.getProtocol()+"\n");
		System.out.printf(obj.getHost()+"\n");
		System.out.printf(obj.getFile()+"\n");
		System.out.printf(obj.getPort()+"\n");
		System.out.printf(obj.getPath()+"\n");
		
	
	}
}
