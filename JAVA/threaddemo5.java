class demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running : "+Thread.currentThread().getName());
        for(int i=0;i<1000;i++)
        {
            System.out.println(Thread.currentThread().getName()+"with ID "+i);

        }
    }
}

class threaddemo5
{
    public static void main(String args[]) 
    {
        System.out.println("Inside main thread"+Thread.currentThread().getName());

        demo dobj1=new demo();
        Thread tobj1=new Thread(dobj1);
        tobj1.setName("PPA");
        demo dobj2=new demo();
        Thread tobj2=new Thread(dobj2);
        tobj2.setName("LB");


        tobj1.start();
        tobj2.start();

    }
}