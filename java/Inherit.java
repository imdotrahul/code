public class Inherit {
    public static void main(String[] args)
    {
        carname l = new carname();
        l.printcarname();
        l.whil();
        l.intirior();
        l.paint();
    }
}


class Car{
    void paint()
    {
        System.out.println("color: black");
    }
}
class Interior extends  Car
{
    void intirior()
    {
        System.out.println("interior: all black ");
    }
}
class Wheel extends Interior
{
    void whil()
    {
        System.out.println("heel type: low profile");
    }
}
class carname extends Wheel
{
    void printcarname()
    {
        System.out.println("LAMBORGHINI HURACCAN");
    }
}
// public class Inheritence
// {
    
// }
    