interface RBI
{
    int Taxrate=30;
    public float calsulateinterest();
}

class SBI implements RBI
{

    public float calsulateinterest()
    {
        return 7.5f;
    }
}

class BOM implements RBI
{

    public float calsulateinterest()
    {
        return 8.2f;
    }

}

class interfacedemo 
{
   public static void main(String[] args) 
   {
    System.out.println("Tax rate is "+RBI.Taxrate);
    SBI sobj=new SBI();
    BOM bobj= new BOM();

    System.out.println("Tax rate is "+sobj.calsulateinterest());
    System.out.println("Tax rate is "+bobj.calsulateinterest());

   }
}
