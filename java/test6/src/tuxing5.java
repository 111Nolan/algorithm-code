import javax.swing.*;
import java.awt.*;
// import java.util.jar.JarFile;
class myJpanel extends JPanel
{
    //重写绘制方法
    public void paint(Graphics gp)
    {
        gp.setColor(Color.black);
        gp.drawRect(40, 50, 120, 80);
        gp.drawOval(40, 50, 120, 80);
        gp.drawOval(40, 70, 60, 40);
        gp.drawOval(40, 80, 30, 20);
    }
}
class pic extends JFrame
{
    public pic()
    {
        this.setTitle("");
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(500,200,200,200);
        //添加内容
        this.setContentPane(new myJpanel());
        this.setVisible(true);
    }
}

public class tuxing5
{
    public static void main(String args[])
    {
        pic p=new pic();
    }
}
