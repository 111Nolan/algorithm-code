import java.util.*;
public class min9
{
    public static void main(String args[])
    {
        int a[][]=new int[5][5];
        int min=99999999;
        Scanner cin=new Scanner(System.in);
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++)
            {
                a[i][j]=cin.nextInt();
                if(a[i][j]<min)
                    min=a[i][j];
            }
        System.out.println(min);
    }
}
