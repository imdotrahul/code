class Mainoverloading
{
    
    public static void main(int i) {
        System.out.println("Inside overloaded main: " + i);
    }
    public static void main(double d) {
        System.out.println("Inside overloaded main: " + d);
    }
    public static void main(String[] args)
    {
        System.out.println("Inside main");
        main(7);
        main(3.14);
    }
}