import java.util.*;
public class runnian5
{
    public static void main(String args[])
    {
        Scanner scanner=new Scanner(System.in);
        int y;
        y=scanner.nextInt();
        if(y%4==0&&y%100!=0||y%400==0)
            System.out.println("闰年");
        else
            System.out.println("非闰年");
    }
}
