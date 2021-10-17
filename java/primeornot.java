import java.util.Scanner;
import java.util.Scanner;

public class primeornot {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = s.nextInt();
        if (isPrime(n)) {
            System.out.println( " Prime.");
        } else {
            System.out.println("Not Prime.");
        }
    }

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
