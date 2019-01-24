import java.util.Scanner;
import java.io.*;
class prog6
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		String S= String.valueOf(n);
		char ch[]=S.toCharArray();
		char c=ch[0];
		int n1=Integer.parseInt(String.valueOf(c));
		System.out.println(ch[n1]);



		
	}
	


}