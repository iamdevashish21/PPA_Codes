import java.io.*;

class exceptiondemo7
{
    public static void main(String[] args)
    {
        try{
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Your name");
        String name=bobj.readLine();

        System.out.println("Enter Your age");
        int age=Integer.parseInt(bobj.readLine());

        System.out.println("Your Name :" +name);
        System.out.println("Your Age :" +age);

        }

        catch(Exception obj)
        {

        }



    }
}