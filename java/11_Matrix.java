/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to read and display an matrix
*/

import java.util.*;

class Matrix
{
	public static void main( String[] args )
	{
		int a[][];
		int r,c;
		
		Scanner oScanner = new Scanner(System.in);
		
		System.out.print("\nEnter no of rows : ");
		r = oScanner.nextInt();
		
		System.out.print("\nEnter no of columns : ");
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
		
		System.out.println("Matrix is : ");
		for( int i = 0; i < a.length ; i++ )
		{
			for ( int j = 0 ; j < a[0].length ; j++ )
			{
				System.out.print("\nElement a["+(i+1)+"]["+(j+1)+"] : "+a[i][j]);
			}
		}
		
		
	}
}