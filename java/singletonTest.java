class one
{
private static int x = 10;
static int display()
{
return x;
}
}

class two
{
public static void main(String[] args)
{
int y = one.display();
System.out.println("Int "+y);
}
}