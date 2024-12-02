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
    public String toString()
    {
        System.out.println("Inside out toString method");
        return name+" "+age+" "+marks;
    }
}
class objectdemo5s
{
    public static void main(String[] args) 
    {
        student sobj=new student("Devashish", 22, 91);
        System.out.println(sobj);

    }
}
