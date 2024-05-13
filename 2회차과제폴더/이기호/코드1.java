import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        if (a % 4 == 0){
            int num = a / 4;
            for (int i = 0; i < num; i++){
                System.out.print("long ");
            }
            System.out.print("int");
        }
    }
}
