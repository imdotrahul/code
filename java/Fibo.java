class Fibo {

    public static void fibo(int n) {
        int first  = 0;
        int second = 1;
        System.out.print(first + " " + second);
        for (int i = 0; i < n-2; i++) {
            int third = first + second;
            System.out.print(" " + third);
            first = second;
            second = third;
        }
    }
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        fibo(n);
    }
}