import java.util.Scanner;

public class tests {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("input the string");
        String test = sc.nextLine();
        if(test.equals("boom baby")){
            System.out.println("sexy lady");
        }
        else{
            System.out.println("your string was: "+test);
        }
        sc.close();
    }
}