class slave
{

String z;
static int a=0;

//creating reference variables
slave one;
slave two;

//creating connstructor 
slave()
{
if(a>=0)
{
one = getObject();
two = getObject();
}
System.out.println("constructor");
}

static slave getObject()
{
--a;
System.out.println("getObject");
return new slave();
}

void p()
{
System.out.println("Hello "+z);
}


public static void main(String[] args)
{
slave master = new slave();
master.one.z = "one";
master.two.z = "two";

master.z="master";
master.p();

master.one.p();
master.two.p();

one.p();
}
}