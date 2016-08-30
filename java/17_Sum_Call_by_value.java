/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to find sum via method call by value
*/

import java.util.*;

class MethodSumCVB
{
	static int sum(int a, int b)
	{
		return(a+b);
	}
	
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter First Number : ");
		int a = oScanner.nextInt();
		System.out.println("\nEnter Second Number : ");
		int b = oScanner.nextInt();
		int c = sum(a,b);
		
		System.out.println("/nSum : " + c);
	}
}