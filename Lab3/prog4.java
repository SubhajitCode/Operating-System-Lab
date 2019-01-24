import java.util.Scanner;
import java.io.*;
class prog4
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String s;
		System.out.println("Please Input A sring");
		s=input.next();
		System.out.println("Please Input A sring");
		int n=input.nextInt();
		char ch[]=s.toCharArray();
		System.out.println(ch[n-1]);


		
	}
	


}