import java.util.*;
public class String3
{
    public static void main(String agrs[])
    {
        String s;
        StringBuffer sb;
        Scanner cin=new Scanner(System.in);
        sb=new StringBuffer(cin.next());
        s=new String(sb);
        System.out.println("“abc”在s中第一次出现的位置为：");
        System.out.println(sb.indexOf("abc"));
        System.out.println("“abc”在s中最后一次出现的位置为：");
        System.out.println(sb.lastIndexOf("abc"));
    }
}
