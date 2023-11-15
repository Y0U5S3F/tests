package tp52;

public class Personne {
    protected String name;

    public Personne(String name) {
        this.name = name;
    }

    public String affiche() {
        return "Je suis " + this.name;
    }
}