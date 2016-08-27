class alpha
{ 
int c;

int a=val();
//this.a=100;
static int b=10;
 
int val()
{
System.out.println("value passed"+c);
System.out.println("value is " + b);

return 10;

}
//int b =10;
alpha()
{
System.out.println("constructed"+b);

}
static {System.out.println("const");}

public static void main(String [] args)
{

alpha ob = new alpha();



}
}