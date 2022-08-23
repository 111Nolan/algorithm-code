interface I{ String getS(); }
public class yanz7
{
    public static void main(String args[]){
        System.out.println(new I(){ public String getS()
    { return "接口和内部类！";}}.getS());
    }
}
