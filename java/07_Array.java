/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to accept a array and display it
*/

import java.util.*;

class Array
{
	public static void main( String[] args )
	{
		int a[];
		Scanner oScanner = new Scanner(System.in);
		System.out.print("\nEnter Size of Array : ");
		int size = oScanner.nextInt();
		
		a = new int[size];
		
		for( int i = 0 ; i < a.length ; i++ )
		{
			System.out.print("Enter Element " + (i+1) + " : ");
			a[i] = oScanner.nextInt();
		}
		
		System.out.println("The Array is :");
		
		for( int i = 0 ; i < a.length ; i++ )
		{
			System.out.println(a[i]);
		}
	}
}