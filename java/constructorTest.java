class beta
{
static int a = 0;

static beta oz;
beta()
{
if(a==0) 
{
oz = alpha();

}
System.out.println("beta");
}

static beta alpha()
{
--a;
return new beta();

}
void p()
{
System.out.println("done");
}

public static void main(String[] args)
{
beta ob = new beta();
ob.p();
oz.p();


}
}