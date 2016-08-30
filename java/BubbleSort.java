/*
* created on 30-08-2016 by Ashish Deep Singh
* Java program to perform Bubble sort
*/

class BubbleSort
{
	static void bSort(int[] array)
	{
		for(int i = 1 ; i<array.length;i++)
		{
			for( int j = 0 ; j<array.length-i;j++)
			{
				if ( array[j] > array[j+1] )
				{
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp ;				
				} 
			}
		}
	}

	static void readArray(int[] array)
	{
		Scanner oScanner = new Scanner(System.in);
		System.out.println("\nEnter the Size of Array : ");
		array = new int[oScanner.getInt()];

		for( int i = 0; i<array.length ; i++)
		{
			array[i] = oScanner.getInt();			
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
		readArray(array);
		bSort(array);
		displayArray(array);
			
	}
}
