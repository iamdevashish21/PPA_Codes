class arithematic
{
    public int Addition(int a,int b)//addition@2ii
    {
        return(a+b);
    }
    public int Addition(int a,int b,int c)//addition@3iii
    {
        return(a+b+c);
    }

    public float Addition(float a,float b)//addition@4ff
    {
        return(a+b);
    }

}

class methodoverloading 
{
    public static void main(String args[]) 
    {
        arithematic aboj= new arithematic();
        System.out.println(aboj.Addition(10,11));
        System.out.println(aboj.Addition(10,11,21));
        System.out.println(aboj.Addition(10.5f,11.2f));
    }
}
