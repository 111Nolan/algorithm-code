import java.util.Vector;
class Queue extends Vector
{
    Vector<String> que=new Vector<String>();
    void inqueue(String a)
    {
        que.add(que.size(), a);
    }
    void outqueue()
    {
        if(que.size()!=0)
        {
            System.out.println("出队的元素为："+que.get(0));
            que.remove(0);
        }
    }
}
public class que7
{
    public static void main(String args[])
    {
        Queue q=new Queue();
        q.inqueue("111");
        q.inqueue("222");
        q.outqueue();
        q.inqueue("333");
        q.outqueue();
        q.outqueue();
    }
}
