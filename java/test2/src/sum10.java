import java.util.*;
public class sum10
{
    public static void main(String args[])
    {
        int a[][]=new int[5][5];
        int sum=0;
        Scanner cin=new Scanner(System.in);
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++)
            {
                a[i][j]=cin.nextInt();
                sum+=a[i][j];
            }
        System.out.println(sum);
    }
}
