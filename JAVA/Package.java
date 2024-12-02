import Marvellous.Circel;
import Marvellous.infosystems.Square;

class Package 
{
    public static void main(String args[]) 
    {
        Circel cobj=new Circel();
        float ans=0.0f;
        ans= cobj.CircleArea(10.5f);

        System.err.println("Area Of circle is:"+ ans);


        Square sobj=new Square();
        ans=sobj.Squarearea(10.5f);
        System.err.println("Area Of Square is:"+ ans);




    }
}
