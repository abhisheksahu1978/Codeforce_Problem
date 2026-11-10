import java.util.Scanner;

public class float_or_int {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();

        int point = n.indexOf('.');
        int integer = Integer.parseInt(n.substring(0, point));

        String decimal = n.substring(point + 1);
        if (decimal.matches("0+")) {
            System.out.println("int " + integer);
        } 
        else {
            System.out.println("float " + integer + " 0." + decimal);
        }
    }
}