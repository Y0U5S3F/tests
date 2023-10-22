import java.util.Scanner;

public class ex2p2tp3{
    public static void main(String[] args){
        Scanner hehi = new Scanner(System.in);
        System.out.println("Donner le nombre binaire:");
        String bin = hehi.nextLine();
        int x=binaire(bin);
        System.out.println("Le nombre est: " + x);
        hehi.close();
    }
    public static int binaire(String bin){
        int x=0;
        for(int i=bin.length()-1;i>=0;i--){
            x = x + fact(2,bin.length()-1-i)*(Character.getNumericValue(bin.charAt(i)));
        }
        return x;
    }
    public static int fact(int x,int n){
        if (n==0){
            return 1;
        }
        else{
            return (fact(x,n-1)*x);
        }
    }
}