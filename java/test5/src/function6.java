import java.util.Scanner;
import java.util.Vector;
class Bas
{
    Vector<String>name=new Vector<String>();
    void find(String a)
    {
        for(int i=0;i<name.size();i++)
        {
            if(a.equals(name.get(i)))
            {
                System.out.println("找到此人！");
                i++;
                System.out.println("此人的编号为："+i);
                return;
            }
        }
        System.out.println("查无此人！");
    }
    void remove(String a)
    {
        for(int i=0;i<name.size();i++)
        {
            if(a.equals(name.get(i)))
            {
                name.remove(i);
                System.out.println(("删除成功！"));
                return;
            }
        }
        System.out.println("无此队员！");
    }
}
public class function6
{
    public static void main(String args[])
    {
        Bas b=new Bas();
        Scanner cin=new Scanner(System.in);
        int t=0;
        for(int i=0;i<5;i++)
        {
            t++;
            System.out.println("请输入队员"+t+"的名字：");
            b.name.add(cin.next());
        }
        System.out.println("请输入要查找的队员的名字：");
        b.find(cin.next());
        System.out.println("请输入要删除的队员的名字：");
        b.remove(cin.next());
        System.out.println("请输入要查找的队员的名字：");
        b.find(cin.next());
    }
}
