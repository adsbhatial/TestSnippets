class ThreadTest implements Runnable
{

int Timer;
String threadName;
Thread oThread;

ThreadTest(String s,int t)
{
Timer = t;
threadName = s;
}
public void run()
{
try{
for (int i = 0 ; i<=5;i++)
{
System.out.println("Entered Run "+threadName);
oThread.sleep(Timer);
}
}
catch(InterruptedException IE)
{
System.out.println(IE);
}
}

public void start()
{
if (oThread == null)
{
oThread = new Thread(this,threadName);
oThread.start();
}
}

public static void main(String [] args)
{
ThreadTest oRunnable = new ThreadTest("Thread One",1000);
oRunnable.start();
ThreadTest oRunnable1 = new ThreadTest("Thread Two",500);
oRunnable1.start();
}
}