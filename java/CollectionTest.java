import java.util.*;

class CollectionsTest
{

void p()
{
System.out.println("done");
}
@SuppressWarnings("unchecked")
public static void main(String[] args)
{

ArrayList al = new ArrayList();
al.add(new ThreadTest2());
al.add(new SynchronisedTest());
al.add(new Integer(10));
al.add(10);

for(int i=0;i<al.size();i++)
{
  ((CollectionsTest)al.get(i)).p();
  
}


}
}