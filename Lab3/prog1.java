import java.util.Scanner;
import java.io.*;
class prog1
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		String name1,name2;
		System.out.println("Please Input Name 1");
		name1=input.next();
		System.out.println("Please Input Name 2");
		name2=input.next();
		String name3=name1.substring(1)+name2.substring(1);
		System.out.println(name3);
		
	}
	


}