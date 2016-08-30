/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to accept a array and sort it via BubbleSort
*/

import java.util.*;

class BubbleSortArray
{
	public static void main( String[] args )
	{
		int a[];
		int size, temp;
		Scanner oScanner = new Scanner(System.in);
		System.out.print("\nEnter Size of Array : ");
		size = oScanner.nextInt();
		
		a = new int[size];
		
		for( int i = 0 ; i < a.length ; i++ )
		{
			System.out.print("Enter Element " + (i+1) + " : ");
			a[i] = oScanner.nextInt();
		}
		
		for(int i = 1 ; i<a.length;i++)
		{
			for( int j = 0 ; j<a.length-i;j++)
			{
				if ( a[j] > a[j+1] )
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp ;				
				} 
			}
		}
		
		System.out.println("The Sorted Array is : ");
		
		for( int i = 0 ; i < a.length ; i++ )
		{
			System.out.println(a[i]);
		}
	}
}