package tp52;

public class Forgeron extends Personne {
    public Forgeron(String name) {
        super(name);
    }

    @Override
    public String affiche() {
        return super.affiche() + " le forgeron";
    }
}