package tp72;

import java.util.ArrayList;
import java.util.List;

public class ListVoiture {
    int i;
    private List<Voiture> voitures;
    public ListVoiture(List<Voiture> voitures) {
        this.voitures = new ArrayList<>(voitures);
    }
    public List<Voiture> getVoitures() {
        return this.voitures;
    }
    public void setVoitures(List<Voiture> voitures) {
        this.voitures=voitures;
    }
    public void ajoutVoiture(Voiture v) throws VoitureException {
        if (voitures.contains(v)) {
            throw new VoitureException("Deja Existant");
        } else {
            voitures.add(v);
        }
    }
    public void supprimeVoiture(Voiture v) throws VoitureException{
        if(voitures.contains(v)){
            voitures.remove(v);
        } else {
            throw new VoitureException("Non Existant");
        }
    }
    public Iterator<Voiture> iterateur(){
        return voitures.iterator();
    }
    public int size(){
        return voitures.size();
    }
    public void affiche(){
        for(i=0;i<this.voitures.size();i++){
            System.out.println(this.voitures.get(i));
        }
    }
}
