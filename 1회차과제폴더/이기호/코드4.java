import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int totalMinutes = a * 60 + b;

        int adjustedMinutes = (totalMinutes - 45 + 1440) % 1440;

        System.out.println(adjustedMinutes / 60 + " " + adjustedMinutes % 60);
    }
}
