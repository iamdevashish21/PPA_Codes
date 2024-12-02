import java.util.Scanner;
class exceptiondemo1 
{
    public static void main(String[] args) 
    {
        int no1,no2,ans;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter 1st No");
        no1=sobj.nextInt();

        System.out.println("Enter 2nd No");
        no2=sobj.nextInt();

        ans=no1/no2;
        System.out.println("The division is: "+ans);
    }
}
