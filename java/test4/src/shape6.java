import java.util.*;
interface Shape
{
    double area();
}
class Tri implements Shape
{
    int a,b,c;
    Tri(int a,int b,int c){this.a=a;this.b=b;this.c=c;}
    public double area()
    {
        double p=(a+b+c)/2.0;
        return Math.sqrt(p*(p-a)*(p-b)*(p-c));
    }
}
class Mat implements Shape
{
    int a,b;
    Mat(int a,int b){this.a=a;this.b=b;}
    public double area()
    {
        return a*b;
    }
}
class Cir implements Shape
{
    int r;
    final static double pi=3.14;
    Cir (int r){this.r=r;}
    public double area()
    {
        return pi*r*r;
    }
}
public class shape6
{
    public static void main(String args[])
    {
        int a,b,c,a1,b1,r;
        Scanner cin=new Scanner(System.in);
        System.out.println("请输入三角形的三条边：");
        a=cin.nextInt();
        b=cin.nextInt();
        c=cin.nextInt();
        System.out.println("请输入矩形的长和宽：");
        a1=cin.nextInt();
        b1=cin.nextInt();
        System.out.println("请输入圆的半径：");
        r=cin.nextInt();
        Tri t=new Tri(a, b, c);
        Mat m=new Mat(a1, b1);
        Cir ci=new Cir(r);
        System.out.println("三角形的面积为："+t.area());
        System.out.println("矩形的面积为："+m.area());
        System.out.println("圆的面积为："+ci.area());
    }

}
