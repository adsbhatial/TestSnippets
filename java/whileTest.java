class whileTest
{
public static void main(String[] args){
int j = 0;
int i=0;
outer:
while(i<5)
{
System.out.println("Outer"+i);
inner:
while(j<5)
{
System.out.println("inner"+j);
if(j>2)
{continue inner;}
j++;
}
i++;
}

}
}