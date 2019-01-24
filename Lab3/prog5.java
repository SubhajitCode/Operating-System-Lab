import java.util.Scanner;
import java.io.*;
class prog5
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		n=2*n;
		String s= Integer.toString(n);
		s=s.substring(0,1)+s.substring(2);
		System.out.println(s);



		
	}
	


}