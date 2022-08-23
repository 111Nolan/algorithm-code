import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
class MyF extends JFrame
{
    //菜单条
    JMenuBar jmb;
    //菜单
    JMenu m1,m2,m3;
    public MyF()
    {
        this.setTitle("选课系统");
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(500,200,500,500);
        //添加菜单条
        jmb=new JMenuBar();
        this.setJMenuBar(jmb);
        //菜单添加到菜单条
        m1=new JMenu("文体类");
        m2=new JMenu("计算机类");
        m3=new JMenu("帮助");
        jmb.add(m1);
        jmb.add(m2);
        jmb.add(m3);
        m1.add(new JMenuItem("艺术欣赏"));
        m1.add(new JMenuItem("健美操"));
        m1.add(new JMenuItem("篮球"));
        m2.add(new JMenuItem("Java语言"));
        m2.add(new JMenuItem("网络编程"));
        m3.add(new JMenuItem("选课方法"));
        this.setVisible(true);
    }
}
public class caidan4
{
    public static void main(String agrs[])
    {
        MyF mf=new MyF();
    }
}
