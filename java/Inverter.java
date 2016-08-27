import java.util.*;

class Inverter
{
static boolean[] terminals ={false,false,false,false,false,false,false,false,false};

void inverterRunning()
{
int i = 0 ;
String command;
do
{

Scanner console = new Scanner(System.in);
System.out.println("Enter Command");
command =console.nextLine();
if (command.equalsIgnoreCase("add"))
{
if(!(terminals[0]&&terminals[1]&&terminals[2]&&terminals[3]&&terminals[4]&&terminals[5]&&terminals[6]&&terminals[7]&&terminals[8]))
{
terminals[i] = true;
System.out.println("Terminal added at node "+(i+1)+"\n");
i++;
}
else
{
System.out.println("\nSystem Overload\n....\nSystem Rebooted\n....\nAll Terminals Removed\n....\nAdd New Terminls");
for(int k = 0; k <= 8 ; k++)
{
terminals[k] = false;
i = 0;

}
}

}

else if (command.equalsIgnoreCase("remove"))
{
if(i>0)
{terminals[i] = false;
System.out.println("Terminal removed from node "+(i)+"\n");
i--;}
else
{
System.out.println("No Terminal to remove");
}
}

else if(command.equalsIgnoreCase("exit"))
{}
else
{
System.out.println("\nInvalid Command\n");
}

}while(!(command.equalsIgnoreCase("exit"))); 
}
public static void main(String[] args)
{
Inverter oInverter1 = new Inverter();
oInverter1.inverterRunning();
}


}