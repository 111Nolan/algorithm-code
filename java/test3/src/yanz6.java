abstract class A{abstract String getS();}
public class yanz6
{
    public static void main(String args[])
    {
        System.out.println(new A()
        { String getS(){ return "抽象？匿名？";}}.getS());
    }
}
