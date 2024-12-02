class base
{
    public int a,b;

    public void fun ()
    {System.out.println("Inside Base fun");}

    public void gun ()
    { System.out.println("Inside Base sun"); }


    public void sun ()
    { System.out.println("Inside Base gun");}

    public void run ()
    { System.out.println("Inside Base run"); }
}

class derived extends base
{

    public int x,y;
    public void fun ()
    { System.out.println("Inside Derived fun");}

    public void sun ()
    { System.out.println("Inside Derived gun");}

    public void mun ()
    { System.out.println("Inside Derived mun");}

    public void bun ()
    { System.out.println("Inside Derived bun");}

}






class RMD 
{
    public static void main(String args[]) 
    {
        base bobj=new derived(); //upcasting
        bobj.fun();//derived fun
        bobj.gun();//base gun
        bobj.sun();//derived gun
        bobj.run();//base run
         //bobj.mun();  NA 
        // bobj.bun();  NA



    }
}

//base bobj=new base()
//derived do