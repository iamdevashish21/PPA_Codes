import java.util.Scanner;
class exceptiondemo2
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int arr[]={10,20,30,40,50};
        int index=0;

        System.out.println("Enter the index:");
        index=sobj.nextInt();

        System.out.println("Valur of the give index is :"+arr[index]);

    }
}
