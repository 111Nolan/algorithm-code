import java.io.*;
import java.util.*;
public class jiafa4
{
    public static void main(String args[])
    {
        int a,b;
        a=(int)Math.random()*50;
        //返回的是从1970.1.1 0:0:0 到现在的毫秒数
        // b=(int)(System.currentTimeMillis()%50);
        //用Calendar类获取分和秒
        Calendar now =Calendar.getInstance();
        b=(int)(now.get(Calendar.MINUTE)+now.get(Calendar.SECOND))%50;
        System.out.println("随机数1为："+a);
        System.out.println("随机数2为："+b);
    }
}
