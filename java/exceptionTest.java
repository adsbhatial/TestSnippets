import java.util.*;

class exceptionTest extends Exception
{
exceptionTest()
{
System.out.println("Before Exception");
p();
System.out.println("After Exception");
}
static void p()
{
Scanner osc= new Scanner(System.in);
String s =osc.nextLine().toString();
try
{
if(s.equals("1"))
{throw new exceptionTest();
}
}


catch(Exception oe)
{
System.out.println("Catch Working");
}



}

public static void main(String[] args)
{
exceptionTest ob1 = new exceptionTest();
}

}

