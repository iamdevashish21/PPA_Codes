import java .util.Scanner;

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside Constructor");
    }
}

class exceptiondemo6 
{
    public static void main(String[] args)
    {
        int age=0;
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter Your age");
        age=sc.nextInt();
    try 
        {
            System.out.println("Inside try");
            if (age<18) 
            {

                AgeInvalidException aobj=new AgeInvalidException ("---------------");
                throw aobj;
            }  
        } 
        catch (AgeInvalidException obj) 
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("inisde finally");
        }
        System.out.println("End of code");
    } 

}
