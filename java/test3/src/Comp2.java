public class Comp2
{
    public static void main(String args[])
    {
        Complex a=new Complex(1,2);
        Complex b=new Complex(3,4);
        System.out.println("复数a为："+a.toString());
        System.out.println("复数b为："+b.toString());
        a.complexAdd(b);
        System.out.println("相加后的结果为："+a.toString());
    }
}
class Complex
{
    private int realPart,maginPart;
    Complex()
    {
        realPart=0;
        maginPart=0;
    }
    Complex(int r,int i)
    {
        realPart=r;
        maginPart=i;
    }
    public Complex complexAdd(Complex a)
    {
        this.realPart+=a.realPart;
        this.maginPart+=a.maginPart;
        return this;
    }
    public String toString()
    {
        String a;
        a=this.realPart+"+"+this.maginPart+"i";
        return a;
    }
}


