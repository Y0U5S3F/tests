package tp72;

public class CritereMarque extends Critere {
    private String marque;

    public CritereMarque(String marque) {
        this.marque = marque;
    }
    public boolean estSatisfaitPar(Voiture v) {
        return v.getMarque().equals(this.marque);
    }
}

