import java.util.*;

class db
{
String getName(int i)
{
if(i==123)
{
return "Hello";
}
else
{
return "Sorry";
}
}

}

class hr
{
db oDb = new db();

public static void main(String[] args)
{
hr oHr = new hr();
System.out.print("Enter Passcode : ");
Scanner oScanner = new Scanner(System.readPassword);
int passcode = oScanner.nextInt();
String z = oHr.oDb.getName(passcode);
System.out.println("List "+z);}
} 
