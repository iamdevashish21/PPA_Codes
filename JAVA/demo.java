class marvellous
{
    public int a;
    protected float b;
    public int c;

    public marvellous()
    {
        a=10;
        b=10.10f;
        c=20;
    }
///default aceees specifier no access specifirt in void chya aagoer so it is default
    void display()
    {
        int i=11; //local variable no characteristics
        System.out.println("Value of f is"+i);
    }
}

//demo class means main method
class demo 
{
    public static void main(String[] args) 
    {
        marvellous mobj= new marvellous();
        mobj.display();
    }
    
}
