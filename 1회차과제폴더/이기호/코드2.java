import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b, c, temp;
        a = sc.nextLong();
        b = sc.nextLong();
        temp = a + b;
        c = sc.nextLong();
        System.out.println(temp + c);
    }
}