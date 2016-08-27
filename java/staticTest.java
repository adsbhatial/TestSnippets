class staticTest
{

static int z = val();
static int val()
{
int x = 10 ;
return x;
}

public static void main(String[] args)
{
int y = val();
System.out.println(y);
System.out.println(z);}
}