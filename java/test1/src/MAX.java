import java.io.*;
public class MAX
{
    public static int cinnum()
    {
        byte buf[]=new byte [20];
        String str;
        try
        {
            System.in.read(buf);
        } catch (Exception e) { }
        str= new String(buf);
        return Integer.parseInt(str.trim());
    }
    public static void main(String args[])
    {
        int a,max=-9999;
        for(int i=0;i<3;i++)
        {
            a=cinnum();
            if(a>max)
                max=a;
        }
        System.out.println(max);
    }
}
