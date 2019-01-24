import java.util.Scanner;
import java.io.*;
class prog11
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		
		String s=input.next();
		int n=-1;
		for(int i=0;i<4;i++)
		{
			 n=s.indexOf('x',n);
			 n=n+1;
		}
		System.out.println(n);
		String s2=s.substring(n);

		System.out.println(s2);


	}
	


}