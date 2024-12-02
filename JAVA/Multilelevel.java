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

class derivedx extends derived
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


class Multilevel 
{
    public static void main(String args[]) 
    {
        System.out.println("Inside Main Method");
        derivedx dobj= new derivedx();
        dobj.fun();
        dobj.gun();
        dobj.sun();
    }
}
