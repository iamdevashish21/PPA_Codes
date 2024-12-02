class arithmetic
{
    public int no1; //characteristics
    public int no2;

    public arithmetic() //constructor
    {
        System.out.println("Inside Default Constructor");
        this.no1=0;
        this.no2=0;
    }

    public arithmetic(int a,int b) //constructor
    {
        System.out.println("Inside parameterised Constructor");
        this.no1=a;
        this.no2=b;
    }

    public int addition() //method,function
    {
        int ans =0;
        ans= this.no1+this.no2;
        return ans;
    }

    public int substraction() //method,function
    {
        int ans=0;
        ans=this.no1-this.no2;
        return ans;
    }

}
class Encapsulation
{
    public static void main(String Arg[])
    {
        System.out.println("Inside Main Function");
        arithmetic aboj1 =new arithmetic();
        arithmetic aboj2 =new arithmetic(11,10);
        
        int ret=0;

        ret=aboj2.addition();
        System.out.println("Addition is"+ret);


        ret=aboj2.substraction();
        System.out.println("Substraction is"+ret);
       }


}