import java.io.*;

class exceptiondemo8
{
    public static void main(String[] args) throws IOException
    {

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Your name");
        String name=bobj.readLine();

        System.out.println("Enter Your age");
        int age=Integer.parseInt(bobj.readLine());

        System.out.println("Your Name :" +name);
        System.out.println("Your Age :" +age);

     }
}