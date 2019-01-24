import java.util.Scanner;
import java.io.*;
class prog8
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String s=input.next();
		int n=s.indexOf('x');
		char ch=s.charAt(n+1);
		System.out.println(ch);


	}
	


}