/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find simple interest
*/

class SimpleInterestCL
{
	public static void main(String[] args)
	{
		if(args.length != 3)
		{
			System.out.println("Invalid parameters");
			System.exit(0);
		}
		
		int p = Integer.parseInt(args[0]);
		int t = Integer.parseInt(args[1]);
		float r = Float.parseFloat(args[2]);
		
		float si = ( p * t * r )/100;
		
		System.out.println("\nSimple Interest  : "+ si);
	}
}