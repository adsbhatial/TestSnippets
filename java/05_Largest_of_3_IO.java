/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to find largest of three numbers by taking user input
*/

import java.util.*;

class LargestIO
{
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter First Number : ");
		int a = oScanner.nextInt();
		System.out.println("\nEnter Second Number : ");
		int b = oScanner.nextInt();
		System.out.println("\nEnter Third Number : ");
		int c = oScanner.nextInt();
		
		if( a >= b && a >= c )
		{
			System.out.println(a +" is the largest of three");
		}
		else if ( b >= c && b >= a)
		{
			System.out.println(b +" is the largest of three");
		}
		else
		{
			System.out.println(c +" is the largest of three");
		}
	}
}
