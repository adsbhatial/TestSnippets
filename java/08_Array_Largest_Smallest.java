/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to accept a array and display its largest and smallest element
*/

import java.util.*;

class ArraySL
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
		
		int l = a[0];
		int s = a[0];
		int posL = 1;
		int posS = 1;
		
		for(int i = 1 ; i < a.length ; i++ )
		{
			if( l < a[i])
			{
				l = a[i];
				posL = i + 1;
			}
			
			if( s > a[i])
			{
				s = a[i];
				posS = i + 1;
			}
		}
		
		System.out.println("The largest value is " + l + " at position "+ posL );
		System.out.println("The Smallest value is " + s + " at position "+ posS );
		
	}
}