package tp52;

public class Menuisier extends Personne {
    public Menuisier(String name) {
        super(name);
    }

    @Override
    public String affiche() {
        return super.affiche() + " le menuisier";
    }
}