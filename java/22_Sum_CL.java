/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find sum of two numbers via CommandLine Parameters
*/

class SumCL
{
	public static void main(String[] args)
	{
		if(args.length != 2)
		{
			System.out.println("Invalid parameters");
			System.exit(0);
		}
		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		int c = a + b;
		System.out.println("\nSum : "+ c);
	}
}