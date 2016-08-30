/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to read and display sum of each diagonal
*/

import java.util.*;

class MatrixSD
{
	public static void main( String[] args )
	{
		int a[][],b[][],sum[][],diff[][];
		int r, c, sumD1, sumD2;
		
		Scanner oScanner = new Scanner(System.in);
		
		System.out.print("\nEnter no of rows for 1st Matrix : ");
		r = oScanner.nextInt();
		
		System.out.print("\nEnter no of columns for 1st Matrix  : ");
		c = oScanner.nextInt();
		
		a = new int[r][c];
		
		for( int i = 0; i < a.length ; i++ )
		{
			for ( int j = 0 ; j < a[0].length ;  j++ )
			{
				System.out.print("\nEnter Element a["+(i+1)+"]["+(j+1)+"] : ");
				a[i][j] = oScanner.nextInt();
			}
		}
		
		System.out.print("\nEnter no of rows for 2nd Matrix : ");
		r = oScanner.nextInt();
		
		System.out.print("\nEnter no of columns for 2nd Matrix  : ");
		c = oScanner.nextInt();
		
		b = new int[r][c];
		
		for( int i = 0; i < b.length ; i++ )
		{
			for ( int j = 0 ; j < b[0].length ;  j++ )
			{
				System.out.print("\nEnter Element b["+(i+1)+"]["+(j+1)+"] : ");
				b[i][j] = oScanner.nextInt();
			}
		}
		
		if(a.length > b.length)
		{
			r = a.length;
		}
		else
		{
			r = b.length;
		}
		
		if(a[0].length > b[0].length)
		{
			c = a[0].length;
		}
		else
		{
			c = b[0].length;
		}
		
		sum = new int[r][c];
		diff = new int[r][c];
		for( int i = 0; i < sum.length ; i++ )
		{
			for ( int j = 0 ; j < sum[0].length ;  j++ )
			{
				sum[i][j] = 0 ;
				diff[i][j] = 0 ;
			}
		}
		
		for( int i = 0; i < a.length ; i++ )
		{
			for ( int j = 0 ; j < a[0].length ;  j++ )
			{
				sum[i][j] = a[i][j];
				diff[i][j] = a[i][j];
			}
		}
		
		for( int i = 0; i < b.length ; i++ )
		{
			for ( int j = 0 ; j < b[0].length ;  j++ )
			{
				sum[i][j] = sum[i][j] + b[i][j];
				diff[i][j] = sum[i][j] - b[i][j];
			}
		}
		
		System.out.println("Sum Matrix is :");
		for( int i = 0; i < sum.length ; i++ )
		{
			for ( int j = 0 ; j < sum[0].length ;  j++ )
			{
			System.out.println("sum["+(i+1)+"]["+(j+1)+"] : " + sum[i][j]);
			}
		}
		
		System.out.println("Difference Matrix is :");
		for( int i = 0; i < diff.length ; i++ )
		{
			for ( int j = 0 ; j < diff[0].length ;  j++ )
			{
			System.out.println("diff["+(i+1)+"]["+(j+1)+"] : " + diff[i][j]);
			}
		}
	}
}