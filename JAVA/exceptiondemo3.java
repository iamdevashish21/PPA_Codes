import java.util.Scanner;
class exceptiondemo3
{
    public static void main(String[] args) 
    {
        int no1,no2,ans;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter 1st No");
        no1=sobj.nextInt();

        System.out.println("Enter 2nd No");
        no2=sobj.nextInt();

        try
        {
            System.out.println("Inside try block");
            ans=no1/no2;
        }

        catch(ArithmeticException obj)
        {
            System.out.println("Inside Catch");
            System.out.println(obj);

        }

        finally
        {
            System.out.println("The finally block");
        }

        System.out.println("The Division is "+ans);
        
    }
}
