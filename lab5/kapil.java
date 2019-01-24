import java.io.*;
class xyz implements Runnable
{
	public void run()
	{
		int i;
	for(i=0;i<5;i++)
	{
		System.out.print(i);
		try
		{
			Thread.sleep(1000);
		}
		catch(Exception ex)
		{}
	}

	}
	

}


class kapil{

public static void main(String args[]) throws Exception
{

xyz k;Thread a,b;
k=new xyz();
a=new Thread(k);
b-new Thread(k);6
a.start();
System.out.print("x");
}


}
