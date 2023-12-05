package tp72;

public class Voiture{
    private int matr;
    private String marque;
    private float prix;
    public Voiture(int matr, String marque, float prix) {
        this.matr=matr;
        this.marque=marque;
        this.prix=prix;
    }
    public int getMatr() {
        return matr;
    }
    public void setMatr(int matr) {
        this.matr = matr;
    }
    public String getMarque() {
        return marque;
    }
    public void setMarque(String marque) {
        this.marque = marque;
    }
    public float getPrix() {
        return prix;
    }
    public void setPrix(float prix) {
        this.prix = prix;
    }
    public int hashCode() {
        return matr;
    }
    public boolean equals(Voiture a,Voiture b) {
        return a.matr == b.matr && b.marque.equals(a.marque);
    }
}
