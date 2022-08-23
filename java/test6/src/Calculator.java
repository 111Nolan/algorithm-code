import java.awt.*;
// import java.awt.event.ActionEvent;
import java.awt.event.*;
import javax.swing.*;
class myFrame extends JFrame
{
    public myFrame()
    {
        setTitle("Calculator");
        add(new myPanel());
        //调整此窗口的大小使其适合子组件的首选大小和布局
        pack();
    }
}
class myPanel extends JPanel
{
    //显示计算器按钮的值和计算后的值
    JTextField display;
    //面板1 面版2
    JPanel panel1,panel2;
    //当前按下的按钮
    String nowButton;
    public myPanel()
    {
        //设置界面的布局为边界布局
        setLayout(new BorderLayout());
        //初始化JTextField
        display=new JTextField("");
        //设置窗口是否可用
        display.setEnabled(true);
        //把文本框加在north处
        add(display,BorderLayout.NORTH);
        //监听操作按钮
        ActionListener command=new commandAction();

        //初始化面板1
        panel1=new JPanel();
        //设置界面的布局为 网格布局4行4列
        panel1.setLayout(new GridLayout(4,4));
        //共16个按钮 左上到右下
        addButton1("7", command);
        addButton1("8", command);
        addButton1("9", command);
        addButton1("+", command);
        addButton1("4", command);
        addButton1("5", command);
        addButton1("6", command);
        addButton1("-", command);
        addButton1("1", command);
        addButton1("2", command);
        addButton1("3", command);
        addButton1("*", command);
        addButton1(".", command);
        addButton1("0", command);
        addButton1("=", command);
        addButton1("/", command);
        //面板1放在布局管理器Center
        add(panel1,BorderLayout.CENTER);

        //初始化面板2
        panel2=new JPanel();
        //设置界面的布局为 网格布局1行2列
        panel2.setLayout(new GridLayout(1,2));
        //添加面板2的两个按钮
        addButton2("BackSace", command);
        addButton2("C", command);
        //面板2放在布局管理器South
        add(panel2,BorderLayout.SOUTH);
    }
    //注册事件监听器的方法 (面板1)
    public void addButton1(String label,ActionListener listener)
    {
        //创建按钮
        JButton jb=new JButton(label);
        //添加监听
        jb.addActionListener(listener);
        //添加到面板1
        panel1.add(jb);
    }
    //注册事件监听器方法 (面板2)
    public void addButton2(String label,ActionListener listener)
    {
        JButton jb=new JButton(label);
        jb.addActionListener(listener);
        panel2.add(jb);
    }
    //单击按钮执行命令的监听器
    class commandAction implements ActionListener
    {
        //重写父类的注释
        // @ Override
        public void actionPerformed(ActionEvent event)
        {
            nowButton=event.getActionCommand();

            //如果是回退和=就不打印
            if(nowButton!="BackSace"&&nowButton!="=")
                display.setText(display.getText()+nowButton);
            //如果是等于就计算并打印结果
            if(nowButton.equals("="))
                display.setText(jisuan1(display.getText()));
            //如果是回退就回退一个字符
            if(nowButton.equals("BackSace"))
            {
                StringBuffer sb=new StringBuffer(display.getText());
                display.setText(sb.substring(0,sb.length()-1));
            }
            //如果是“C”则清空
            if(nowButton.equals("C"))
                display.setText("");
        }
    }
    //用于计算的方法
    public String jisuan1(String str)
    {
        StringBuffer sb=new StringBuffer(str);
        //符号数量
        int commandCount=0;
        //计数器
        int j=0;
        //计算有多少个运算符，就有n+1个数字
        for(j=0;j<sb.length();j++)
        {
            if(sb.charAt(j)<='9'&&sb.charAt(j)>='0')
                continue;
            else
                commandCount++;
        }
        //初始化符号数组
        char command[]=new char[commandCount];
        //初始化数字数组，不知道数字的长度所以用String存
        String num[]=new String[commandCount+1];
        for(j=0;j<num.length;j++)
            num[j]="";
        //遍历一遍，把每个数字都存进数字数组，每个符号都存进符号数组
        int k=0;
        for(j=0;j<sb.length();j++)
        {
            if(sb.charAt(j)<='9'&&sb.charAt(j)>='0')
                num[k]+=sb.charAt(j);
            else
                command[k++]=sb.charAt(j);
        }
        //计算结果
        double res=0;
        for(int i=0;i<commandCount;i++)
        {
            //取前两个数和第一个运算符进行运算
            double num1=Double.parseDouble(num[i]);
            double num2=Double.parseDouble(num[i+1]);
            char cc=command[i];
            switch(cc)
            {
                case '+':
                    res=num1+num2;
                    break;
                case '-':
                    res=num1-num2;
                    break;
                case '*':
                    res=num1*num2;
                    break;
                case '/':
                    res=num1/num2;
                    break;
                default:
                    break;
            }
            //将结果存到第二个数字的位置
            num[i+1]=String.valueOf(res);
        }
        return String.valueOf(res);
    }
}
public class Calculator
{
    public static void main(String agrs[])
    {
        myFrame mf=new myFrame();
        //设置关闭按键
        mf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //设置窗口可视化
        mf.setVisible(true);
    }
}
