class ThreadTest2 implements Runnable
{



public void run()
{
if(Thread.currentThread().getName().equals("Thread1"))
{for(int i = 0 ; i <= 5 ; i++)
{
System.out.println("Thread1 "+i);
try{
Thread.currentThread().sleep(500);
}
catch(InterruptedException ie)
{
ie.printStackTrace();
}
catch(Exception e)
{
e.printStackTrace();
}
}
}
else if(Thread.currentThread().getName().equals("Thread2"))
{
for(int i = 0 ; i <= 5 ; i++)
{
System.out.println("Thread2 "+i );
try{
Thread.currentThread().sleep(500);
}
catch(InterruptedException ie)
{
ie.printStackTrace();
}
catch(Exception e)
{
e.printStackTrace();
}
}
}
else
{
for(int i = 0 ; i <= 5 ; i++)
{
System.out.println("Thread3 "+i );
try{
Thread.currentThread().sleep(500);
}
catch(InterruptedException ie)
{
ie.printStackTrace();
}
catch(Exception e)
{
e.printStackTrace();
}
}

}


}

public static void main(String[] args)
{
ThreadTest2 ob = new ThreadTest2();
Thread oThread1 = new Thread(ob);
oThread1.setName("Thread1");
Thread oThread2 = new Thread(ob);
oThread2.setName("Thread2");
oThread2.start();
oThread1.start();

new Thread(ob).start();

Thread oThread4 = new Thread(new Runnable()
{
public void run()
{
System.out.println("anonymous calling");
}
});

oThread4.start();

}
}

class ThreadChild
{
}
