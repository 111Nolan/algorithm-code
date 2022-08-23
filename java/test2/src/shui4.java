public class shui4
{
    public static void main(String agrs[])
    {
        int a,b,c;
        for(int i=101;i<=999;i++)
        {
            a=i%10;
            b=i/10%10;
            c=i/100;
            if(a*a*a+b*b*b+c*c*c==i)
                System.out.println(i);
        }
    }
}