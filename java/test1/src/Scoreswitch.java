public class Scoreswitch
{
    public static void main()
    {
        byte buf[]=new byte[20];
        String str;
        int score;
        try
        {
            System.in.read(buf);
        } catch (Exception e){}
        str=new String(buf);
        score=Integer.parseInt(str.trim());
        switch(score/10)
        {
            case 10:
            case 9:
                System.out.println("A");
                break;
            case 8:
                System.out.println("B");
                break;
            case 7:
                System.out.println("C");
                break;
            case 6:
                System.out.println("D");
                break;
            default:

        }
    }
}
