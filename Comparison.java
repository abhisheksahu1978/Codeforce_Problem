import java.util.Scanner;

public class Comparison{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        char s = sc.next().charAt(0);
        int b = sc.nextInt();

        if(s == '>' && a > b){
            System.out.println("Right");
        }else if(s == '<' && a < b){
            System.out.println("Right");
        }else if(s == '=' && a == b){
            System.out.println("Right");
        }else{
            System.out.println("Wrong");
        }
    }
}