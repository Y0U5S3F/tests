import java.util.Scanner;

public class puis {
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        int a=x.nextInt();
        Scanner y = new Scanner(System.in);
        int k=y.nextInt();
      int result = puiss(k,a);
      System.out.println(result);
    }
    public static int puiss(int k,int a) {
      if (k==0) {
        return 1;
      } else {
        return a * puiss(k - 1,a);
      }
    }
  }