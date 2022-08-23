import java.awt.*;
import javax.swing.*;
public class Keydemo1 extends JFrame
{
    int index;
    // JLabel jl=new JLabel("hello!");
    JButton jb=new JButton("FlowLayout/BorderLayout/GridLayout布局");
    public Keydemo1()
    {
        //设置界面的布局为 流式布局/边界布局/网格布局
        // this.setLayout(new FlowLayout());
        // this.setLayout(new BorderLayout());
        this.setLayout(new GridLayout(3,3));
        //设置标签文字的位置在布局的中间
        // this.add(jl,BorderLayout.CENTER);
        //设置按钮在布局的南部
        this.add(jb);
        //设置窗口的位置和大小
        this.setBounds(500,200,500,300);
        //设置窗口的关闭事件的响应,如果点击关闭按钮那么就退出
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        //设置窗口的标题
        this.setTitle("了解布局");
        //设置窗口是否可见
        this.setVisible(true);
        //为按钮注册事件响应
        // jb.addActionListener(new MyActionListener());
    }
    public static void main(String args[])
    {
        //实例化窗口对象
        Keydemo1 k=new Keydemo1();
    }
}
