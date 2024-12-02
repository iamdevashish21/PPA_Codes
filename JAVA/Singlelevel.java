class base
{
    public int a,b;

    public base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun ()
    {
        System.out.println("Inside Base fun");
    }

}

class derived extends base
{

    public int x,y;

    public derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void gun ()
    {
        System.out.println("Inside Derived gun");
    }

}


class Singlelevel 
{
    public static void main(String args[]) 
    {
        System.out.println("Inside Main Method");
        derived dobj= new derived();
        dobj.fun();
        dobj.gun();
    }
}
