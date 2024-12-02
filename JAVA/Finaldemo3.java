class demo 
{
    public int no1;
    final public int no2; //const int no2=21;

    public demo(int a, int b)
    {
        no1=a;
        no2=b;
    }
    
}

public class Finaldemo3 
{
    public static void main(String args []) 
    {
        demo dobj=new demo (11,21);
        System.out.println("Value of No1 :"+dobj.no1);
        System.out.println("Value of No2 :"+dobj.no2);
        
    }
}
