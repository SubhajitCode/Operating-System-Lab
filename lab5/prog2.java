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


class prog2{

public static void main(String args[]) throws Exception
{

	xyz k;Thread a,b;
	k=new xyz();
	a=new Thread(k);
	b=new Thread(k);
	a.start();
	Thread.sleep(1500);
	b.start();
	Thread.sleep(3500);
	System.out.print("x");
}


}
