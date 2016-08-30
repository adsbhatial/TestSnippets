/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to read and display sum of each diagonal
*/

import java.util.*;

class MatrixDiag
{
	public static void main( String[] args )
	{
		int a[][];
		int r, c, sumD1, sumD2;
		
		Scanner oScanner = new Scanner(System.in);
		
		System.out.print("\nEnter no of rows : ");
		r = oScanner.nextInt();
		
		System.out.print("\nEnter no of columns : ");
		c = oScanner.nextInt();
		
		if(r != c)
		{
			System.out.println("Diagonals Not Possible");
			System.exit(0);
		}
		
		a = new int[r][c];
		
		
		for( int i = 0; i < a.length ; i++ )
		{
			for ( int j = 0 ; j < a[0].length ;  j++ )
			{
				System.out.print("\nEnter Element a["+(i+1)+"]["+(j+1)+"] : ");
				a[i][j] = oScanner.nextInt();
			}
		}
		
		sumD1 = 0;
		sumD2 = 0;
		
		for( int i = 0; i < a.length; i++)
		{
			sumD1 = sumD1 + a[i][i];
			sumD2 = sumD2 + a[i][(a.length)-i- 1];
		}
		
		System.out.println("Sum of Primary Diagonal : " + sumD1);
		
		System.out.println("Sum of Secondary Diagonal : " + sumD2);
		
		
	}
}