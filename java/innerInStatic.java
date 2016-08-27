class innerInStatic
{

inner getObject()
{
return new inner();
}

static class inner
{
void display()
{
System.out.println("Inner");
}
}
public static void main(String[] args)
{
innerInStatic ob =new innerInStatic();
innerInStatic.inner obz = ob.getObject();
innerInStatic.inner oby = new innerInStatic.inner();
oby.display();
obz.display();
}

}