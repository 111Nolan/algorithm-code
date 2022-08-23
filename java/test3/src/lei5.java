class Person
{
    int id;
    String name,sex;
    Person() {}
    Person(int a,String n,String s) {id=a;name=n;sex=s;}
    public void changeid(int a) {id=a;}
    public void changename(String n) {name=n;}
    public int getid() {return this.id;}
    public String getname() {return this.name;}
    public String getsex() {return sex;}
}
class Teacher extends Person
{
    String dept;
    Teacher() {}
    Teacher(int a,String n,String s) {id=a;name=n;sex=s;}
    public void changedept(String b) {dept=b;}
    public String getdept() {return dept;}
}
class Student extends Person
{
    int cla;
    Student() {}
    Student(int a,String n,String s) {id=a;name=n;sex=s;}
    public void changecla(int b) {cla=b;}
    public int getcla() {return cla;}
}
class Classes
{
    String name;
    Student stu[]=new Student [100];
    int num=0;
    Classes(String a) {name=a;}
    public void setup(Student a)
    {
        stu[num]=new Student();//这里注意一下要给每个stu初始化
        stu[num].id=a.getid();
        stu[num].name=a.getname();
        stu[num].sex=a.getsex();
        stu[num].cla=a.getcla();
        num++;
    }
    public void output()
    {
        System.out.println("班级名称："+name);
        for(int i=0;i<num;i++)
        {
            System.out.println("学生编号："+stu[i].id+"\t"+"姓名："+stu[i].name+"\t"+"性别："+stu[i].sex);
        }
    }
}
public class lei5
{
    public static void main(String args[])
    {
        Student a =new Student(1,"张三","男");
        Student b =new Student(2,"李四","男");
        Student c =new Student(3,"王五","男");
        Student d =new Student(4,"赵六","男");
        Student e =new Student(5,"梅花","女");
        Classes m=new Classes("111班");
        m.setup(a);
        m.setup(b);
        m.setup(c);
        m.setup(d);
        m.setup(e);
        m.output();
    }
    

}
