import java.util.Scanner;
import java.io.*;
class prog10
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String s=input.next();
		int n=s.indexOf('x');
		int n1=s.indexOf('x',n+1);
		System.out.println(n1);


	}
	


}