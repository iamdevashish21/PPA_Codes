class demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running");
    }
}

class threaddemo2
{
    public static void main(String args[]) 
    {
        System.out.println("Inside main thread");

        demo dobj=new demo();
        Thread tobj=new Thread(dobj);

        tobj.start();

    }
}