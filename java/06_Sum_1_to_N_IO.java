/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to find sum of 1 to n natural numbers by taking User Input
*/

import java.util.*;

class Sum1ToN
{
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter N : ");
		int n = oScanner.nextInt();
		int sum = 0 ;
		for( int i = 1; i <= n ; i++ )
		{
			sum = sum + i ;
		}
		System.out.println("/nSum : " + sum);
	}
}