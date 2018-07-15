
import java.io.*;
import java.sql.*;

class DB
{
	public static void main(String args[])
	{
		
		try
		{
			Class.forName("com.mysql.jdbc.Driver");	

			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/login","root","");
			
			Statement stmt = con.createStatement();

			ResultSet rs = stmt.executeQuery("select * from student");

			/*while(rs.next())
			{
				System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
			}
	
			stmt.executeUpdate("insert into student(sname,spass) values ('Ram','ram123')");

			//stmt.executeUpdate("create table xyz (name varchar(100))");

			stmt.executeUpdate("delete from student where sname='mohit'");
			*/


			// using praparedStatement

			ResultSetMetaData rsmd = rs.getMetaData();
			
			System.out.println(rsmd.getColumnCount());
			System.out.println(rsmd.getColumnName(2));




			con.close();
		}



		catch(Exception se)
		{
			System.out.println(se);

		}
		
	
	}

}
