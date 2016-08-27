class StringTest
{
public static void main(String[] args)
{
String a = "java";
String b = "java";
System.out.println(a.equals(b));
System.out.println(a==b);
String c = new String("java");
String d = new String("java");
System.out.println(c.equals(d));
System.out.println(c==d);

String e =a;
String f =b;
System.out.println(e.equals(f));
System.out.println(e==f);

}
}