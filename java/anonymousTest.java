/*
abstract class anonymousTest
{

abstract void p();


}
*/

 interface anonymousTest
{
void p();
}


class b
{
public void p()
{

}

}

class a extends b implements anonymousTest
{



public static void main(String[] args )
{

a ob = new a()
{
public void p()
{
System.out.println("Hello");
}

};

ob.p();




}
}  