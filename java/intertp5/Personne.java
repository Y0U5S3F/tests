package intertp5;

public class Personne{
    private String nom;
    private String prenom;

    public void personne(String nom ,String prenom){
        this.nom=nom;
        this.prenom=prenom;
    }

    public void identite(){
        System.out.println("nom : "+this.nom+" prenom : "+this.prenom);
    }
    
}
