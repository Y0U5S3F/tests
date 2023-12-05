package tp72;

import java.util.ArrayList;
import java.util.List;
public class Agence {
    int i;
    private String nom;
    private ListVoiture vs;
    private int[][] ClientVoitureLoue;

    public Agence(String nom) {
        this.nom=nom;
        this.vs = new ListVoiture(new ArrayList<>());
        ClientVoitureLoue=new int[2][2];
    }

    public void ajoutVoiture(Voiture v) throws VoitureException {
        if (vs.contains(v)) {
            throw new VoitureException("Deja Existant");
        } else {
            vs.add(v);
        }
    }

    public void suppVoiture(Voiture v) throws VoitureException {
        if(vs.contains(v)){
            vs.remove(v);
        } else {
            throw new VoitureException("Non Existant");
        }
    }

    public void loueClientVoiture(Client cl, Voiture v) throws VoitureException {
        if (ClientVoitureLoue[cl.getCode()][v.getMatr()] == 1) {
            throw new VoitureException("Car not available");
        } else {
            ClientVoitureLoue[cl.getCode()][v.getMatr()] = 1;
        }
    }

    public void retourClientVoiture(Client cl, Voiture v) throws VoitureException {
        ClientVoitureLoue[cl.getCode()][v.getMatr()] = 0;
    }

    public void selectVoitureSelonCritere(Critere c) {
        List<Voiture> selectedCars = new ArrayList<>();
        for (Voiture v : vs.getVoitures()) {
            if (c.estSatisfaitPar(v)) {
                selectedCars.add(v);
            }
        }
        for(i=0;i<selectedCars.size();i++){
            System.out.println(selectedCars.get(i));
        }
    }
}
