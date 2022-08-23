import javax.swing.*;
import java.awt.*;
class Mjf extends JFrame
{
    public void paint(Graphics gs)
    {
        gs.setColor(Color.black);
        gs.drawOval(50, 50, 80, 100);
        gs.drawArc(70,110,40,20,180,180);
        gs.drawArc(70, 80, 14, 7, 0, 180);
        gs.drawArc(110, 80, 14, 7, 0, 180);
    }
    Mjf ()
    {
        this.setTitle("笑脸");
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(500,200,200,200);
        this.setVisible(true);
    }
}
public class lau6
{
    public static void main(String agrs[])
    {
        Mjf mj =new Mjf();
    }
}
