/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find Simple Interest by Method using call by value
*/
import java.util.*;

class SimpleInterestCVB
{
	static float interest(int p , int t ,float r)
	{
		return(( p * t * r )/100);
	}
	
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter Principal : ");
		int p = oScanner.nextInt();
		System.out.println("\nEnter Time : ");
		int t = oScanner.nextInt();
		System.out.println("\nEnter Rate : ");
		float r = oScanner.nextFloat();
		float si = interest(p,t,r);
		System.out.println("\nSimple Interest  : "+ si);
	}
}