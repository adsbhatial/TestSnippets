import java.util.*;
class CarProgram //Class Starts
{

//Main Starts
public static void main(String[] args)
{
/*
boolean door = door();
boolean key = key(door);
boolean ignition = ignition(key);
boolean transmission = transmission(ignition);
*/

//Using Functions With return type as Parameters to the next function

checkCar(transmission(ignition(key(door()))));

}

//Function door() starts
static boolean door()
{

int i =0;

do
{

Scanner console = new Scanner(System.in);
System.out.println("Do You Want To Open the Door?: Y or N");
char Answer = console.next().charAt(0);

if ((Answer=='Y')||(Answer=='y'))
{
i = 1;
return(true);
}

else if ((Answer =='N')||(Answer=='n'))
{
i=1;
return(false);
}

else
{
System.out.println("\nEnter A Correct Input\n");
i =0;
}

}while(i==0);

return(false);

}//Function door() ends

//Function key() starts
static boolean key(boolean door)
{

if (door == true)
{
int i =0;

do{
Scanner console = new Scanner(System.in);
System.out.println("Do You Want To Insert the Key?: Y or N");
char Answer = console.next().charAt(0);

if ((Answer=='Y')||(Answer=='y'))
{
i = 1;
return(true);
}

else if ((Answer =='N')||(Answer=='n'))
{
i=1;
return(false);
}

else
{
System.out.println("\nEnter A Correct Input\n");
i =0;
}

}while(i==0);

return(false);

}

else
{
return(false);
}

}//Function key ends

//Function ignition() starts
static boolean ignition(boolean key)
{

if (key==true)
{
int i =0;

do{
Scanner console = new Scanner(System.in);
System.out.println("Do You Want To Start the Ignition?: Y or N");
char Answer = console.next().charAt(0);

if ((Answer=='Y')||(Answer=='y'))
{
i = 1;
return(true);
}

else if ((Answer =='N')||(Answer=='n'))
{
i=1;
return(false);
}

else
{
System.out.println("\nEnter A Correct Input\n");
i =0;
}

}while(i==0);

return(false);

}

else
{
return(false);
}

}//Function ignition() ends

//Function transmission() starts
static boolean transmission(boolean ignition)
{

if(ignition==true)
{

int i =0;

do{
Scanner console = new Scanner(System.in);
System.out.println("Do You Want To Transmit to Forward?: Y or N");
char Answer = console.next().charAt(0);

if ((Answer=='Y')||(Answer=='y'))
{
i = 1;
return(true);
}

else if ((Answer =='N')||(Answer=='n'))
{
i=1;
return(false);
}

else
{
System.out.println("\nEnter A Correct Input\n");
i =0;
}

}while(i==0);

return(false);

}

else
{
return(false);
}

}//Function transmission() ends

//Function checkCar() ends
static void checkCar(boolean transmission)
{

if (transmission == true)
{

System.out.println("\nCar is Running\n");

}

else
{

System.out.println("\nCar is not Running\n");

}

}//Function checkCar() Ended

}//Class Ended