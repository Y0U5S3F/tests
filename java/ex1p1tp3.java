import java.util.Scanner;

public class ex1p1tp3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("donner x: ");
        int x = scan.nextInt();
        System.out.println("donner puissance : ");
        int n = scan.nextInt();
        System.out.println("the result is: " + recursive(x,n));
        scan.close();
    }
    public static int recursive(int x,int n){
        if (n==0){
            return 1;
        }
        else{
            return (recursive(x,n-1)*x);
        }
    }
}