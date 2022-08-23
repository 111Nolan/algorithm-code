import java.util.*;
public class printpic3
{
    public static void main(String args[])
    {
        int n,t;
        Scanner scanner=new Scanner(System.in);
        n=scanner.nextInt();
        t=n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=t;j++)
                System.out.print("   ");
            t--;
            for(int j=1;j<=i;j++)
                System.out.print("*      ");
            System.out.println();
        }
    }
}
