import java.util.*;

class collections 
{
    public static void main(String[] args) 
    {
        Stack <String>sobj=new Stack<String>();
        sobj.push("C Programming");
        sobj.push("C++ Programming");
        sobj.push("Java Programming");
        sobj.push("Python Programming");


        System.out.println(sobj);

        String ret =sobj.pop();

        System.out.println(ret);
        
        System.out.println(sobj);


    }    
}
