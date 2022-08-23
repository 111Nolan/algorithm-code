import java.awt.*;
import javax.swing.*;
public class Picdemo2 extends JFrame
{
    public Picdemo2()
    {
        //创建标签
        JLabel jl=new JLabel("有标签的窗口！");
        jl.setBounds(170,0,450,30);
        //设置窗体的布局管理器为null
        setLayout(null);
        //添加标签
        this.add(jl);
        //设置位置、大小
        this.setBounds(330,250,500,150);
        //设置窗口的关闭事件的响应,如果点击关闭按钮那么就退出
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //设置窗口是否可见
        setVisible(true);
    }
    public static void main(String args[])
    {
        //实例化窗口对象
        Picdemo2 pic =new  Picdemo2();
    }
}
