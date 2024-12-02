class demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running :"+Thread.currentThread().getName());
    }
}

class threaddemo4
{
    public static void main(String args[]) 
    {
        System.out.println("Inside main thread");

        demo dobj=new demo();
        Thread tobj=new Thread(dobj);
        tobj.setName("PPA");
        tobj.start();

    }
}