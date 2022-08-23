public class Outer4
{ public Outer4(){System.out.println("OuterClass Object!");}
  private class  Inner1
   { private  Inner1(String s){ System.out.println(s);} }
  static class Inner2
{ Inner2(String s){ System.out.println(s);} }
  public static void  main(String[] args)
   { Outer4 ob= new Outer4();
    //  ob.Inner1 ib1 = ob.new Inner1("InnerClass1 Object!");
     Outer4.Inner1 ib1 = ob.new Inner1("InnerClass1 Object!");
     Inner2 ib2=new Inner2("InnerClass2 Object!");
    }
  }
