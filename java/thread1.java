class thread1 extends Thread
{

public void run()
{

try
{

for(int i =0 ; i<=10; i++)
{
System.out.println("tick "+i);
Thread.sleep(1000);


}

}

catch(Exception e)
{

}


}

public static void main(String [] args)
{

thread1 t1 = new thread1();
System.out.println("bomb ticking ");
System.out.println(t1.getState());
t1.start();
System.out.println(t1.getState());

try
{
t1.join();
System.out.println("Booooooommmmmmmmmmm!!!!!!!!!!!!");
System.out.println(t1.getState());
}

catch(InterruptedException e)
{

}
}
}