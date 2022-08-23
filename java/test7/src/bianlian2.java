import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class MJF extends JFrame implements ActionListener
{
    JButton happy=new JButton("Smile");
    JButton sad=new JButton("Cry");
    boolean ishappy=true;
    public void paint(Graphics gs)
    {
        super.paint(gs);//这里要重新初始化不然会出现麻烦
        gs.setColor(Color.black);
        if(ishappy==true)
        {
            gs.drawString("哭！", 100, 100);
            gs.setColor(Color.black);
            gs.drawOval(255, 250, 80, 100);
            gs.drawArc(270,310,40,20,0,180);
            gs.drawArc(270, 280, 14, 7, 180, 180);
            gs.drawArc(310, 280, 14, 7, 180, 180);
        }
        else
        {
            gs.drawString("笑！", 100, 100);
            gs.setColor(Color.black);
            gs.drawOval(255, 250, 80, 100);
            gs.drawArc(270,310,40,20,180,180);
            gs.drawArc(270, 280, 14, 7, 0, 180);
            gs.drawArc(310, 280, 14, 7, 0, 180);
        }
    }
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==happy)
        {
            ishappy=true;
            repaint();
        }
        else
        {
            ishappy=false;
            repaint();
        }
    }
    public MJF()
    {
        this.setTitle("变脸");
        this.setLayout(new FlowLayout());
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(500,200,500,500);
        this.getContentPane().setBackground(Color.yellow);
        add(happy);
        add(sad);
        happy.addActionListener(this);
        sad.addActionListener(this);
        this.setVisible(true);
    }
}
public class bianlian2
{
    public static void main(String args[])
    {
        MJF mj=new MJF();
    }
}
