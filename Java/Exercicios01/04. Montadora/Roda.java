
/**
 * Classe da roda de um carro.
 * 
 * @author Yuri Alessandro Martins
 * @version 03082016
 */
public class Roda{
    private int tam_aro;
    private int pressao;

    public Roda(int aro, int pres){
        tam_aro = aro;
        pressao = pres;
    }

    // Getters
    public int getAro(){
        return tam_aro;
    }

    public int getPres(){
        return pressao;
    }

    // Setters
    public void setAro(int n_aro){
        tam_aro = n_aro;
    }

    public void setPres(int n_pres){
        pressao = n_pres;
    }
}
