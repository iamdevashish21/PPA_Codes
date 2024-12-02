class student implements Cloneable
{
    public String name;
    public int age;
    public int marks;

    public student (String A, int B, int C)
    {
        this.name=A;
        this.age=B;
        this.marks=C;

    }
    public Object Clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class objectdemo4 
{
    public static void main(String[] args) 
    {
        try
        {
        student sobj=new student("Devashish", 22, 91);

        student sobjx=(student)sobj.Clone();



        System.out.println("Name is :"+sobj.name);
        System.out.println("Age is :"+sobj.age);
        System.out.println("Marks is :"+sobj.marks);


        System.out.println("Name is :"+sobjx.name);
        System.out.println("Age is :"+sobjx.age);
        System.out.println("Marks is :"+sobjx.marks);

        }
        catch(Exception obj)
        {}
    }
}
