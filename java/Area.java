import java.util.Scanner;




public class Area

{
    static double calculatearea(double radius)
    {
        return 22*radius*radius/7;

    }
    public static void main(String[] args)
    {
        Scanner s= new Scanner(System.in);

        System.out.println("Enter the value of radius: ");
        double r=s.nextDouble();
        double area = calculatearea(r);
        System.out.println("The area of the circle is: "+ area);
    }
}