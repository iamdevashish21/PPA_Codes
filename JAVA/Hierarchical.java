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

class derivedx extends base
{

    public int p,q;

    public derivedx()
    {
        System.out.println("Inside Derivedx Constructor");
    }

    public void sun ()
    {
        System.out.println("Inside Derived sun");
    }

}
class Hierarchical 
{
    public static void main(String args[]) 
    {
        System.out.println("Inside Main Method");
        
        derived dobj1=new derived();

        derivedx dobj2=new derivedx();

        dobj1.fun();
        dobj1.gun();

        dobj2.fun();
        dobj2.sun();
    }
}
