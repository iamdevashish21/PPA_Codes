class demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running");
    }
}

class threaddemo3
{
    public static void main(String args[]) 
    {
        System.out.println("Inside main thread");

        demo dobj=new demo();
        Thread tobj=new Thread(dobj);

        tobj.start();

    }
}