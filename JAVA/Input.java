import java.util.*;

class Input 
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int No1=0,No2=0,ANS=0;

        System.out.println("Enter first No");
        No1 = sobj.nextInt();

        System.out.println("Enter first No");
        No2 = sobj.nextInt();

        ANS = No1 + No2;

        System.out.println("Addition is "+ANS);

    }
}
