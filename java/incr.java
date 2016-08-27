class incr
{
public static void main(String[] args)
{
	int x= 10;
	int y;
	System.out.println(""+(x++));
	System.out.println(""+(++x));
	y = (x++)+(++x);
	System.out.println(""+y);
}
}
