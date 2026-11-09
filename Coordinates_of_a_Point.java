import java.util.Scanner;

public class Coordinates_of_a_Point{
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        // System.out.println(x);
        double y = sc.nextDouble();
        // System.out.println(y);

        if(x > 0 && y > 0){
            System.out.println("Q1");
        }else if( x < 0 && y > 0){
            System.out.println("Q2");
        }else if( x < 0 && y < 0){
            System.out.println("Q3");
        }else if(x > 0 && y < 0){
            System.out.println("Q4");
        }else if( x == 0 && y == 0){
            System.out.println("Origem");
        }else if(x == 0 ){
            System.out.println("Eixo Y");
        }else if(y == 0){
            System.out.println("Eixo X");
        }
        else{
            System.out.println("invalid coordinates");
        }
        
    }
}
