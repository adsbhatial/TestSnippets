/*
*created on 30-08-2016 by Ashish Deep Singh
* Java program to test type of method calls
*/

class MainSum
{
	static int sum(int a, int b)
	{
		return(a+b);
	}

	int sum2(int a, int b)
	{
		return(a+b);
	}

	public static void main(String[] args)
	{
		int a, b ;
		a = 25 ;
		b = 35 ;
		System.out.println("Via Static Sum : "+sum(a,b));
		System.out.println("Via Non-Static Sum : "+new MainSum().sum2(a,b));
		System.out.println("Via Static Test Sum  : "+TestSum.sum(a,b));
		System.out.println("Via Non-Static Test Sum : "+new TestSum().sum2(a,b));
	}
}

class TestSum
{
	static int sum(int a, int b)
	{
		return(a+b);
	}

	int sum2(int a, int b)
	{
		return(a+b);	
	}
}
