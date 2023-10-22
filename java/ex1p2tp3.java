import java.util.Scanner;

public class ex1p2tp3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("donner k: ");
        int k = scan.nextInt();
        System.out.println("donner n: ");
        int n = scan.nextInt();
        System.out.println("recursiveorial of " + n +"^"+ k + " is: " + recursive(k,n));
        System.out.println("Arrangement of " + k + " among " + n + " is: " + arr(k,n));
        System.out.println("Combination of " + k + " among " + n + " is: " + comb(k,n));
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

    public static long arr(int n, int k) {
        return recursive(k,n) / recursive(n-k,n);
    }

    public static long comb(int n, int k) {
        return arr(k,n) / recursive(k,n);
    }
}