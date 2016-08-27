class SuperClass
{
void display()
{
System.out.println("Super");
}

SuperClass()
{
System.out.println("Super Consructor");
}
}

class ClassSub extends SuperClass
{

void display()
{System.out.println("Sub");}
void show()
{
System.out.println("Sub");
}

ClassSub()
{
System.out.println("Sub Consructor");
}

public static void main(String[] args)
{
ClassSub oSub = new ClassSub();
oSub.show();
oSub.display();
SuperClass oSup = new ClassSub();
//oSup.show();
oSup.display();
}
}