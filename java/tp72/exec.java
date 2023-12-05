package tp72;

import java.util.ArrayList;
import java.util.List;
public class exec {
    public static void main(String[] args){
                    Client x = new Client(0, "aa", "aaa");
                    Client y = new Client(1, "bb", "bbb");
                    Voiture x1 = new Voiture(0, "kia", 25000);
                    Voiture y1 = new Voiture(1, "ford", 35000);
                    try {
                        ListVoiture listVoiture = new ListVoiture(new ArrayList<>());
                        listVoiture.ajoutVoiture(x1);
                        listVoiture.ajoutVoiture(y1);

                        Agence agence = new Agence("Agence1");
                        agence.ajoutVoiture(x1);
                        agence.ajoutVoiture(y1);

                        agence.loueClientVoiture(x, x1);

                        agence.retourClientVoiture(x, x1);


                    CritereMarque critereMarque = new CritereMarque("kia");
                    CriterePrix criterePrix = new CriterePrix(30000);
                    Agence.selectVoitureSelonCritere(critereMarque);
                    Agence.selectVoitureSelonCritere(criterePrix);

                    }catch (VoitureException e){
                        System.out.println("erreur");
                    }
    }
}
