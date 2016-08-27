class parent
{
int x;
parent()
{
//x=100;
p();
}

void p()
{
System.out.println(x +"parent");
}

}

class child extends parent
{
int x;

void p()
{

x=100;
System.out.println("child");
}


public static void main(String [] args)
{
parent ob = new  child();

}

}
