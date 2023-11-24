package tp72;
public class CriterePrix extends Critere {
    private double prix;

    public CriterePrix(double prix) {
        this.prix = prix;
    }
    public boolean estSatisfaitPar(Voiture v) {
        return v.getPrix() <= this.prix;
    }
}