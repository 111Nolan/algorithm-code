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
class yzhu extends Circle
{
    int h;
    yzhu(){x=y=r=h=0;}
    yzhu(int a,int b,int c,int d){super(a,b,c);h=d;}
    public double mj()
    {return 2*super.mj()+h*zc();}
    public double tj()
    {return super.mj()*h;}
}
public class yuanzhu4
{
    public static void main(String args[])
    {
        Circle yuan =new Circle(1,2,3);
        yzhu yz =new yzhu(1,2,3,4);
        System.out.println("圆心的坐标为："+"("+yuan.x+","+yuan.y+")");
        System.out.println("圆的半径为："+yuan.r);
        System.out.println("圆的周长为："+yuan.zc());
        System.out.println("圆的面积为："+yuan.mj());
        System.out.println("圆柱的高为："+yz.h);
        System.out.println("圆柱的面积为："+yz.mj());
        System.out.println("圆柱的体积为："+yz.tj());
    }
}