import java.util.*;
public class gcd1
{
    static int gcd1(int a,int b)
    {
        if(a%b==0)
            return b;
        return gcd1(b,a%b);
    }
    static int gcd2(int a,int b)
    {
        int t=1;
        while(b!=0)
        {
            t=b;
            b=a%t;
            a=t;
        }
        return t;
    }
    public static void main(String[] args)
    {
        int m,n;
        Scanner cin=new Scanner(System.in);
        m=cin.nextInt();
        n=cin.nextInt();
        System.out.println("循环的结果为："+gcd2(m,n));
        System.out.println("递归的结果为："+gcd1(m,n));
    }
}
