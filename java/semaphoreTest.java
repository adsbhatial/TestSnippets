import java.util.concurrent.*;

class semaphoreTest extends Thread
{
private Semaphore machines;

semaphoreTest(Semaphore machines , String name)
{
this.machines = machines;
this.setName(name);
this.start();
}

public void run()
{
try
{
System.out.println(getName()+" is waiting for ATM machine");
machines.acquire();
System.out.println(getName()+" is accessing is the ATM machine");
Thread.sleep(1000);
System.out.println(getName()+" is done using the ATM machine");
machines.release();
}
catch(Exception e)
{}
}

public static void main(String[] args)
{

Semaphore obj = new Semaphore(2);
new semaphoreTest(obj,"Person 1");
new semaphoreTest(obj,"Person 2");
new semaphoreTest(obj,"Person 3");
new semaphoreTest(obj,"Person 4");
new semaphoreTest(obj,"Person 5");


}
}