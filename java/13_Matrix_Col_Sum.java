/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to read and display sum of each Column
*/

import java.util.*;

class MatrixColSum
{
	public static void main( String[] args )
	{
		int a[][];
		int r, c, sum;
		
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
		 
		for( int i = 0; i < a[0].length ; i++ )
		{	
			sum = 0;
			for ( int j = 0 ; j < a.length ; j++ )
			{
				sum = sum + a[j][i];
			}
			System.out.println("Sum of column "+(i+1)+" is : "+sum);
		}
		
		
	}
}