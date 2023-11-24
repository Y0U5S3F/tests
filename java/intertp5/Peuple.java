package intertp5;

public class Peuple {
    private Homme[] pays;
    private int nbHommes = 0;
    private int i;

    public Peuple() {
        pays = new Homme[100];
    }
    public void naissance(Homme h){
        this.pays[nbHommes]=h;
        nbHommes++;
    }
    public void explorer(){
        for(i=0;i<nbHommes;i++){}
    }

}
