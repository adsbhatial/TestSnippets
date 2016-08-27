class ScopeTest
{

	int i = 20 ;
	void m()
	{
			 i=10;
			System.out.println(++i);
		}
	
	

	public static void main(String[] args){
					ScopeTest ob = new ScopeTest(); //ob refers to the memory location where the object is stored
					System.out.println(ob.i);			
					ob.m();
					System.out.println(ob.i);
					
				}

}