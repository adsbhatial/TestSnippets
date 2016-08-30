/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to pass array as a parameter to the method
*/

import java.util.*;

class ArrayP
{
	static void readArray(int[] array)
	{
		Scanner oScanner = new Scanner(System.in);
		
		for( int i = 0; i<array.length ; i++)
		{
			System.out.print("Enter Element " + (i+1) + " : ");
			array[i] = oScanner.nextInt();			
		}
	}

	static void displayArray(int[] array)
	{
		System.out.println("\nArray is : ");
		for( int i = 0 ; i < array.length ; i++)
		{
			System.out.println(array[i]);			
		}
	}	

	public static void main(String args[])
	{
		int[] array;
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter the Size of Array : ");
		array = new int[oScanner.nextInt()];

		readArray(array);
		displayArray(array);
			
	}
}