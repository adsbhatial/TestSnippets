/*
* created on 29-08-2016 by Ashish Deep Singh
* Java program to find Simple Interest by taking User Input
*/
import java.util.*;

class SimpleInterestIO
{
	public static void main(String[] args)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter Principal : ");
		int p = oScanner.nextInt();
		System.out.println("\nEnter Time : ");
		int t = oScanner.nextInt();
		System.out.println("\nEnter Rate : ");
		float r = oScanner.nextFloat();
		float si = ( p * t * r )/100;
		System.out.println("\nSimple Interest  : "+ si);
	}
}