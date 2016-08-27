import java.util.*;

class Ternary
{

static int percentage;

static 
{
Scanner sc = new Scanner(System.in);
System.out.println("\nEnter your Percentage");
percentage = sc.nextInt();
}

void output(char p)
{
if(p =='p')
{
System.out.println("You are Eligible");
}
else
{
System.out.println("You are Ineligible");
}
}

public static void main(String[] args)
{
Ternary oTernary = new Ternary();
oTernary.output(percentage>40?'p':'f');
System.out.println(oTernary);
}
}