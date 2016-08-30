/*
*created on 29-08-2016 by Ashish Deep Singh
*java program to find simple interest
*/

import java.util.*;

class SimpleInterest
{
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		int principal, time;
		float interest, rate;
		
		System.out.print("\nEnter Principal : ");
		principal = oScanner.nextInt();
		
		System.out.print("\nEnter Time : ");
		time = oScanner.nextInt();

		System.out.print("\nEnter Rate : ");
		rate = oScanner.nextInt();

		interest = ( principal * rate * time )/100;
		System.out.print("\nInterest : "+interest);		
	}
}
