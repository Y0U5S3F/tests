public class canada{
    public static void main(String[] args) {
        String white = " ";
        String red = "*";
        String mapleLeaf = "@";

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 30; j++) {
                if ((i >= 2 && i <= 7) && (j >= 10 && j <= 19)) {
                    System.out.print(mapleLeaf);
                } else if ((j >= 0 && j <= 9) || (j >= 20 && j <= 29)) {
                    System.out.print(red);
                } else {
                    System.out.print(white);
                }
            }
            System.out.println();
        }
    }
}
