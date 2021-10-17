import java.util.Scanner;

class voting{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of persons:  ");
        int testcase = s.nextInt();
        for(int i=0;i<testcase;i++)
        {
            System.out.print("Enter the age of the person: ");

            int age = s.nextInt();
            if(age>18)
            {
                System.out.println("Eligible for voting.");
            }
            else 
            {
                System.out.println("Not Eligible.");
            }

        }
    }
}