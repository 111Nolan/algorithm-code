interface Food
{ public void doEat();}     // doEat()是吃食物的方法
abstract class Fruit{}      //水果抽象类
abstract class Meat{ }      //肉抽象类
class Apple extends Fruit implements Food//苹果类
{ public void doEat()
  { System.out.println("我是苹果，属于水果类，你不必烹饪我就可吃！"); }
}
class Beef extends Meat implements Food        //牛肉类
{ public void doEat()
  {System.out.println("我是牛肉，属于肉类，必须烹饪后才可吃！"); }
}
public class Use5
{ public static void main(String args[])
  { 
    Food f=new Apple();
    f.doEat();
    f=new Beef();
    f.doEat();        // 两个“f.doEat()”体现了多态
    // Food f=new Apple();  f.doEat();  
}
}

