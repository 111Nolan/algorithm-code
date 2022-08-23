import java.awt.*;
import javax.swing.*;
class Cal extends JFrame
{
    //三个文本框
    JTextField t1,t2,t3;
    //四个按钮
    JButton jb1,jb2,jb3,jb4;
    //一个界面
    JPanel jp;
    public Cal()
    {
        this.setTitle("计算器");
        this.setLayout(new GridLayout(4,4));
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(500,200,500,500);
        t1=new JTextField("123");
        t2=new JTextField();
        t3=new JTextField();
        t1.setEnabled(true);
        t2.setEnabled(true);
        t3.setEnabled(true);
        jb1=new JButton("+");
        jb2=new JButton("-");
        jb3=new JButton("*");
        jb4=new JButton("/");
        jp=new JPanel();
        add(t1);
        add(t2);
        add(jp);
        add(t3);
        //将面板以网格布局分为1行4列
        jp.setLayout(new GridLayout(1,4));
        jp.add(jb1);
        jp.add(jb2);
        jp.add(jb3);
        jp.add(jb4);
        this.setVisible(true);//这句要放在最后写
    }
}
public class c3
{
    public static void main(String agrs[])
    {
        Cal c=new Cal();
    }
}
