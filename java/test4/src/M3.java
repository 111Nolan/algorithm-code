import java.util.*;;
class Matrix
{
    int m,n;
    int ma[][];
    Matrix(int m,int n){this.m=m;this.n=n;ma=new int[m][n];}
    public Matrix cheng(Matrix a)
    {
        Matrix newm=new Matrix(m, a.n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<a.n;j++)
            {
                int temp=0;
                for(int k=0;k<n;k++)
                    temp+=this.ma[i][k]*a.ma[k][j];
                newm.ma[i][j]=temp;
            }
        }
        return newm;
    }
    public void print()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                System.out.print(ma[i][j]+" ");
            System.out.println();
        }
    }
}
public class M3
{
    public static void main(String args[])
    {
        Matrix m1=new Matrix(2, 3);
        Matrix m2=new Matrix(3, 2);
        Scanner cin=new Scanner(System.in);
        for(int i=0;i<2;i++)
            for(int j=0;j<3;j++)
                m1.ma[i][j]=cin.nextInt();
        for(int i=0;i<3;i++)
            for(int j=0;j<2;j++)
                m2.ma[i][j]=cin.nextInt();
        System.out.println("矩阵1为：");
        m1.print();
        System.out.println("矩阵2为：");
        m2.print();
        Matrix m3=m1.cheng(m2);
        System.out.println("相乘后的结果为：");
        m3.print();
    }
}
