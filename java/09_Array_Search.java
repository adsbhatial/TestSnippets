/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to accept a array and find a value
*/

import java.util.*;

class ArraySearch
{
	public static void main( String[] args )
	{
		int a[];
		int size, value ;
		int pos = 1;
		boolean flag = true ;
		Scanner oScanner = new Scanner(System.in);
		System.out.print("\nEnter Size of Array : ");
		size = oScanner.nextInt();
		
		a = new int[size];
		
		for( int i = 0 ; i < a.length ; i++ )
		{
			System.out.print("Enter Element " + (i+1) + " : ");
			a[i] = oScanner.nextInt();
		}
		
		System.out.print("\nEnter The Value to be Found : ");
		value = oScanner.nextInt();
		
		for(int i = 1 ; i < a.length ; i++ )
		{
			if( value == a[i])
			{
				System.out.println("Value found at position : " + ( i + 1) );
				flag = false;
				break;
			}
			
		}
		
		if(flag)
		{
			System.out.println("Value not found");
		}
		
	}
}