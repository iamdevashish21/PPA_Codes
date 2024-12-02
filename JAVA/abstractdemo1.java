abstract class arithmetic 
{
    abstract public int addition(int a, int b);
    abstract public int subtraction(int a, int b);

    public int multiplication(int a, int b) 
    {
        return a * b;
    }
}

class marvellous extends arithmetic {
    public int addition(int a, int b) {
        return a + b;
    }

    public int subtraction(int a, int b) {
        return a - b;
    }
}
class abstractdemo1 
 
{
    public static void main(String[] args) {
        marvellous mobj = new marvellous();
        System.out.println(mobj.addition(10, 11));
        System.out.println(mobj.subtraction(10, 11));
        System.out.println(mobj.multiplication(10, 11));
    
}
}
