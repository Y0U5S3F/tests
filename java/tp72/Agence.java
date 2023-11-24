package tp72;

public class Agence {
    private String nom;
    private ListVoitures vs;
    private int[][] ClientVoitureLoue;

    public Agence(String nom) {
        this.nom=nom;
        ClientVoitureLoue=new int[2][2];
    }

    public void ajoutVoiture(Voiture v) throws VoitureException {
        if (voitures.contains(v)) {
            throw new VoitureException("Deja Existant");
        } else {
            voitures.add(v);
        }
    }

    public void suppVoiture(Voiture v) throws VoitureException {
        if(voitures.contains(v)){
            voitures.remove(v);
        } else {
            throw new VoitureException("Non Existant");
        }
    }

    public void loueClientVoiture(Client cl, Voiture v) throws VoitureException {
        if (ClientVoitureLoue[cl.getCode()][v.getMatricule()] == 1) {
            throw new VoitureException("Car not available");
        } else {
            ClientVoitureLoue[cl.getCode()][v.getMatricule()] = 1;
        }
    }

    public void retourClientVoiture(Client cl, Voiture v) throws VoitureException {
        ClientVoitureLoue[cl.getCode()][v.getMatricule()] = 0;
    }

    public List<Voiture> selectVoitureSelonCritere(Critere c) {
        
    }
}
