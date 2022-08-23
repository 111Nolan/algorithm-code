import java.util.*;;
public class sort5
{
    public static void main(String args[])
    {
        int a[]=new int[10];
        Scanner cin=new Scanner(System.in);
        for(int i=0;i<10;i++)
            a[i]=cin.nextInt();
        System.out.println("排序前的数组为：");
        for(int i=0;i<10;i++)
            System.out.print(a[i]+" ");
        System.out.println();
        Arrays.sort(a);
        System.out.print("排序后的数组为：");
        for(int i=0;i<10;i++)
            System.out.println(a[i]+" ");
    }
}
