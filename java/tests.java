import java.util.Scanner;

public class tests {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] x = new String[10];
        int i;
        for(i=0;i<10;i++){
            System.out.printf("Donner Tab[%d]%n",i);
            x[i] = sc.nextLine();
        }
        for(i=0;i<10;i++){
            System.out.println(x[i]);
        }
    }
}