/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find Simple Integererest by Method using call by reference
*/
import java.util.*;

class SimpleInterestCVR
{
	static Float interest(Integer p , Integer t ,Float r)
	{
		return(( p.intValue() * t.intValue() * r.floatValue() )/100);
	}
	
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter Principal : ");
		Integer p = oScanner.nextInt();
		System.out.println("\nEnter Time : ");
		Integer t = oScanner.nextInt();
		System.out.println("\nEnter Rate : ");
		Float r = oScanner.nextFloat();
		Float si = interest(p,t,r);
		System.out.println("\nSimple Interest  : "+ si);
	}
}