import java.util.*;
public class zhuanhuan2
{
    public static void main(String args[])
    {
        Scanner cin=new Scanner(System.in);
        String str=cin.next();
        int a=Integer.parseInt(str);
        str=cin.next();
        //parseInt可以选择进制
        int b=Integer.parseInt(str,2);
        str=cin.next();
        double c=Double.parseDouble(str);
        str=cin.next();
        boolean d=Boolean.parseBoolean(str);
        System.out.println("十进制数为："+a);
        System.out.println("二进制数为："+b);
        System.out.println("实数为："+c);
        System.out.println("布尔值为："+d);
    }
}
