class Yuan
{ int r; String name; static int z= 5;
    Yuan(){}
  Yuan(int r){ this.r=r; }
 int a(){ return z*r*r; }
  int p(){ return 5*z*r; }  
  void value (){ name="china"; }
 } 
class test1 extends Yuan
{ int h; String name;
test1(int r,int h1) { super(r); h=h1; } 
int a(){ value();  return 2*super.a()+p()*h; }
void value()
{ super.value();
	name="America";
	System.out.println("\""+this.name+"\"");
	System.out.println(super.name); 
}
public static void main(String args[]) 
{ Yuan y= new Yuan(4);
	Yuan yz= new test1(5,2);
    System.out.println(y.a());
  System.out.println(yz.p());
   System.out.println(yz.a());        
 } 
}
