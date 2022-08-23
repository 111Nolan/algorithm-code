import java.util.*;
public class sort8
{
    public static void main(String args[])
    {
        Integer a[]=new Integer[10];
        Scanner cin=new Scanner(System.in);
        for(int i=0;i<10;i++)
            a[i]=cin.nextInt();
        //默认是sort升序，这里写一下sort的重构
        //Comparator 要求元素是对象而不是基础数据类型，所以不能对int数组sort倒序
        Arrays.sort(a,new Comparator<Integer>()
        {
            public int compare (Integer a ,Integer b)
            {
                return a-b;
            }
        });
        for(int i=0;i<10;i++)
            System.out.print(a[i]+" ");
    }
}
