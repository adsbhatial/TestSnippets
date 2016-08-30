/*
* created on 26-08-2016 by Ashish Deep Singh
* Java program to find simple interest
*/

class SimpleInterest
{
	public static void main(String[] args)
	{
		int p = 10000;
		int t = 4;
		float r = 1.4;
		float si = ( p * t * r )/100;
		System.out.println("\nSimple Interest  : "+ si);
	}
}