public class random11
{
    public static void main(String args[])
    {
        int a[][]=new int [6][6];
        double sum=0;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                a[i][j]=(int)(Math.random()*10)+10;
                if(i==j||i+j==5)
                    sum+=Math.sqrt(a[i][j]);
            }
        }
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
                System.out.print(a[i][j]+" ");
            System.out.println();
        }
        System.out.println(sum);
    }
}
