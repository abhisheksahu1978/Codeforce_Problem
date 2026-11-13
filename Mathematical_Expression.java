import java.util.Scanner;

public class Mathematical_Expression {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        char s = sc.next().charAt(0);
        int b = sc.nextInt();

        char q = sc.next().charAt(0);
        int c = sc.nextInt();

        int result = 0;

        if (s == '+') {
            result = a + b;
        }
        else if (s == '-') {
            result = a - b;
        }
        else if (s == '*') {
            result = a * b;
        }

        if (result == c) {
            System.out.println("Yes");
        }
        else {
            System.out.println(result);
        }

        sc.close();
    }
}