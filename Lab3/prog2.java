import java.util.Scanner;
import java.io.*;
class prog2
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String s;
		System.out.println("Please Input A sring");
		s=input.next();
		s=s.substring(0,1)+s.substring(3);
		System.out.println(s);

		
	}
	


}