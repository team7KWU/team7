import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a;
        int temp;
        StringBuilder c = new StringBuilder();
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        String[] b = sc.next().split("");

        for (int i = b.length -1; i >= 0; i--) {
            temp = a * Integer.parseInt(b[i]);
            c.append(b[i]);
            System.out.println(temp);
        }
        System.out.print(a * Integer.parseInt(c.reverse().toString()));
    }
}