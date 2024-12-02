class demo
{
    public  demo()
    {
        System.out.println("Inside Constructor");
    }

    protected void demo()
    {
        System.out.println("Inside Finalize Method");
    }


}
class objectdemo3
{
    public static void main(String[] args) 
    {
        demo obj=new demo();   
        obj=null;     
        System.gc();
    }
}
