import java.util.*;

class LNode
{
	int value;
	LNode next;

	LNode()
	{
		value = 0;
		next =NULL;
	}

	LNode(int z, LNode link)
	{
		value = z;
		next = link;
	}

	void setValue(int data)
	{
		value = data;
	}

	void setNext(LNode link)
	{
		next = link;
	}

	int getValue()
	{
		return value
	}

	LNode getNext()
	{
		return next;	
	}
}

class SingleLinkedList
{
	int nodes = 0;
	LNode head;
	LNode tail;
	
	//Insertion at Head
	void insertAtHead(int value)
	{
		LNode temp = new LNode(value,NULL);
		nodes++;
		if(head==NULL)
		{
			head = temp;
			tail = head;
			
		}
		else
		{
			
			temp.setNext(head);
			head = temp;
		}
	}
	
	//Insertion at Tail
	void insertAtTail(int value)
	{
		LNode temp = new LNode(value,NULL);
		nodes++;
		if(head == NULL)
		{
			head = temp;
			tail = head;
		}
		else
		{
			tail.setNext = temp;
			tail = temp ;
		}
	}
	
	//Insertion at a position
	void insertAtPos(int value , int pos)
	{
		LNode temp = new LNode(value,NULL);
		LNode temp2 = head;
		pos = pos -1;
		for(int i = 0; i< nodes ;i++)
		{
			if(i==pos)
			{
				
			}
		}
	}
	
}
class linkedList
{	
	int doFirst = 1;
	int doSecond = 1;
	
	
	linkedList(){
	do{
		doSecond=1;
		System.out.println("\nEnter The Code of operations : ");
		System.out.println("1 Insertion");
		System.out.println("2 Deletion");
		System.out.println("3 Sorting");
		System.out.println("4 Search");
		System.out.print("Enter The Command or Press E for Exit:");
		Scanner oScanner = new Scanner(System.in);
		char[] command = oScanner.next().toCharArray();
		if(command[0]=='1')
		{
			
	//Insertion
	
	
			System.out.println("Insertion Done");
		}
		else if(command[0]=='2')
		{//Deletion
	
	
			System.out.println("Deletion Done");
		}
		else if(command[0]=='3')
		{//Sorting
	
	
			System.out.println("Sorted");
		}
		
		else if(command[0]=='4')
		{//Search
	
	
		System.out.println("Searched");
		}
		else if(command[0]=='e'||command[0]=='E')
		{
		System.exit(0);
		}
		else
		{
			System.out.println("Please Enter a Valid Option.");
			doSecond=0;
		}
	
		while(doSecond==1){
		//Another operation
	
		System.out.println("Do you want to Do Another Operation(Press Y or N):");
		command = oScanner.next().toCharArray();
	
	
		if(command[0]=='N'||command[0]=='n')
		{
			doFirst = 0;
			doSecond = 0;
		}
	
		else if(command[0]=='Y'||command[0]=='y')
		{
			doSecond=0;
		}
		else
		{
			System.out.println("Please Enter a Valid Option.\n");
		}
	}
	
	}while(doFirst==1);
}
public static void main(String[] arguments)
{
linkedList ob = new linkedList();}
}