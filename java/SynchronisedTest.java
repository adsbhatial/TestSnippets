class SynchronisedTest implements Runnable
{
 void vapor()
{
//System.out.println("Hello "+Thread.currentThread().getName()+" You are in Vapor");
for (int i = 0; i< 5 ;i++)
{
try
{
Thread.sleep(500);
System.out.println("Hello "+Thread.currentThread().getName()+" You are in Vapor");
}
catch(Exception e)
{
}
}
}



 static void VaporStatic()
{
for (int i = 0; i< 5 ;i++)
{
try
{
Thread.sleep(1000);
System.out.println("Hello "+Thread.currentThread().getName()+" You are in Vapor Static");
}
catch(Exception e)
{
}
}
}
public void run()
{


VaporStatic();
vapor();
/*
try
{
Thread.currentThread().sleep(500);
}
catch(Exception ae)
{
ae.printStackTrace();
}
*/

}

public static void main(String[] args)
{
SynchronisedTest oST = new SynchronisedTest();
Thread oThread1 = new Thread(oST);
oThread1.setName("oThread1");
Thread oThread2 = new Thread(oST);
oThread2.setName("oThread2");
oThread2.start();
oThread1.start();

}
}