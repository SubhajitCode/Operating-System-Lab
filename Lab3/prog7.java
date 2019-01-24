import java.util.Scanner;
import java.io.*;
import java.util.Arrays; 
class prog7
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String name[]=new String[3];
		System.out.println("Please Input Name 1");
		name[0]=input.next();
		System.out.println("Please Input Name 2");
		name[1]=input.next();
		System.out.println("Please Input Name 3");
		name[2]=input.next();
		Arrays.sort(name);
		System.out.println(name[2]);
		



		
	}
	


}