import java.util.Arrays;

class cellcompete
{
public static int[] competeCell(int[] arr,int days)
{
int[] arrCopy = Arrays.copyOf(arr,arr.length);
int[] arrResult = new int[arr.length];
for(int k = 1 ; k<=days;k++)
	{
	for(int i =0;i<arrCopy.length;i++)
	{
		if(i==0)
		{
			if(arrCopy[i+1]==0)
			{
				arrResult[i]=0;
			}
			else
			{
				arrResult[i]=1;
			}
		}
		else if(i==(arrCopy.length-1))
		{
			if(arrCopy[i-1]==0)
			{
				arrResult[i]=0;
			}
			else
			{
				arrResult[i]=1;
			}
		}
		else
		{
		if((arrCopy[i-1]==0&&arrCopy[i+1]==0)||(arrCopy[i-1]==1&&arrCopy[i+1]==1))
		{
			arrResult[i]=0;
		}
		else
		{
			arrResult[i]=1;
		}
		}
	}
	}
return arrResult;
}

public static void main(String[] arguments)
{
int[] a = new int[]{1,0,0,0,0,1};
int[] b = new int[]{1,0,1,0,0,1,0,1,0};
int[] z = competeCell(a,1);
int[] y = competeCell(b,2);

System.out.print("\na                : ");
for(int i = 0; i<a.length;i++)
{System.out.print(a[i]+" ");}

System.out.print("\nCellCompete of a : ");
for(int i = 0; i<z.length;i++)
{System.out.print(z[i]+" ");}

System.out.print("\nb                : ");
for(int i = 0; i<b.length;i++)
{System.out.print(b[i]+" ");}

System.out.print("\nCellCompete of b : ");
for(int i = 0; i<y.length;i++)
{System.out.print(y[i]+" ");}

}
}