import java.io.*;
public class Hello
{
    public static void main(String [] args)
    {
        byte buf[]=new byte[20];
        String str;
        int a,b;
        System.out.println("请输入俩整数：");
        try
        {
            System.in.read(buf);
        } catch (Exception e) {}
        str=new String(buf);
        a=Integer.parseInt(str.trim());//这个一定要加
        try
        {
            System.in.read(buf);
        } catch (Exception e) {}
        str=new String(buf);
        b=Integer.parseInt(str.trim());
        if(a<b)
            System.out.println("最小数是"+a);
        else
            System.out.println("最小数是"+b);
    }
}