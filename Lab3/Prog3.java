import java.util.Scanner;
import java.io.*;
class Prog3
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String s;
		System.out.println("Please Input A sring");
		s=input.next();
		char s1[]=s.toCharArray();
		char s2=s1[4];
		s1[4]=s1[1];
		s1[1]=s2;
		s=String.valueOf(s1);
		System.out.println(s);

		
	}
	


}