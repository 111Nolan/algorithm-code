public class test2
{public static void main(String args[])
 { double val;
	StringBuffer sb1, sb2;
	String sb3;
	char s[]={'a','p','p','l','e'};
	val = 5.8;
	sb1 = new StringBuffer("apples");
	sb2=new StringBuffer("pears");
	sb3 = new String("pear");
	modify(val, sb1, sb2,sb3,s);
	System.out.println(val);
	System.out.println(sb1);
	System.out.println(sb2);
	System.out.println(sb3);
	System.out.println(s);
}
public static void modify(double a, StringBuffer r1,
			            StringBuffer r2,String r3,char s[] )
  { a = 6.8;  
    r1.append(" taste good");
    r2=null;
    r3="banana";
    s[2]='R';       }
}
