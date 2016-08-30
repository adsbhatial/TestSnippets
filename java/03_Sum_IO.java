/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to find sum of two numbers by taking User Input
*/

import java.util.*;

class SumIO
{
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter First Number : ");
		int a = oScanner.nextInt();
		System.out.println("\nEnter Second Number : ");
		int b = oScanner.nextInt();
		int c = a + b;
		
		System.out.println("/nSum : " + c);
	}
}