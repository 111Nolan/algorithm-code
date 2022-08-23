import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class PressMe extends Frame
{
    static TextField t;
    static int i;
    Button b;
    public PressMe()
    {
        // ActionListener com=new commandAction();
        setLayout(new FlowLayout());
        setTitle("Press Me");
        setBounds(500, 500, 170, 100);
        t=new TextField("您还没按我呢！",12);
        b=new Button("Press Me");
        add(t);
        add(b);
        b.addActionListener(new com());
        setVisible(true);
    }
    class com implements ActionListener
    {
        public void actionPerformed(ActionEvent event)
        {
            t.setText("您按了我"+ ++i+"次！");
        }
    }
}
// class MyActionListener extends ActionListener
// {
//     public void actionPerformed(ActionEvent e)
//     {

//     }
// }
public class press1
{
    public static void main(String agrs[])
    {
        PressMe pm=new PressMe();
        //为了关闭Frame类窗口,用JFrame会方便很多
        pm.addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                System.exit(0);
            }
        });
    }
}
