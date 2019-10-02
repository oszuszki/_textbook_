class Madar
{
        
    public void  repul()
    {
			
            System.out.println(this.getClass().getName() + ": " + "repül!");
    }
}
class Sass extends  Madar
{
}
class Pingvin extends  Madar
{
}
class Liskov
{

    public static void repulMadar(Madar madar)
    {
        madar.repul();
    }

    public static void main(String[] args)
    {
        Madar sass = new Sass();
        Madar pingvin = new Pingvin();
        
        repulMadar(sass);
        repulMadar(pingvin);
        
        
    }

}

