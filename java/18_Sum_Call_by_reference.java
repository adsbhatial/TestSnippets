/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find sum via method call by refernce
*/

import java.util.*;

class MethodSumCVR
{
	static Integer sum(Integer a, Integer b)
	{
		return(new Integer( a.intValue() + b.intValue() ));
	}
	
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.print("\nEnter First Number : ");
		Integer a = oScanner.nextInt();
		System.out.print("\nEnter Second Number : ");
		Integer b = oScanner.nextInt();
		Integer c = sum(a,b);
		
		System.out.println("\nSum : " + c);
	}
}