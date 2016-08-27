class parent
{int x;
parent()
{
x=100;
System.out.println(x);}
}

class child extends parent
{
//int x;
public static void main(String[] args)
{
child ob = new child();
parent ob1 = new child();
System.out.println(ob.x);
System.out.println(ob1.x);
}
}