public class circle3
{
    public static void main(String args[])
    {
        Circle c=new Circle(1,2,3);
        System.out.println("圆心的坐标为："+"("+c.x+","+c.y+")");
        System.out.println("圆的半径为："+c.r);
        System.out.println("圆的周长为："+c.zc());
        System.out.println("圆的面积为："+c.mj());
    }
}
class Circle
{
    int x,y,r;
    static final double pi=3.14;
    Circle(){x=y=r=0;}
    Circle(int a,int b,int c){x=a;y=b;r=c;}
    public double zc()
    {return 2*pi*r;}
    public double mj()
    {return pi*r*r;}
}