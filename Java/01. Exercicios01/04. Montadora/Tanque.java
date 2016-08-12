
/**
 * Classe do tanque de combustível de um carro.
 * 
 * @author Yuri Alessandro Martins
 * @version 03082016
 */
public class Tanque{
    private int cap;
    private int fuel;

    public Tanque(int n_cap, int n_fuel){
        cap = n_cap;
        fuel = n_fuel;
    }

    // Getters
    public int getCap(){
        return cap;
    }

    public int getFuel(){
        return fuel;
    }

    // Setters
    public void setCap(int n_cap){
        cap = n_cap;
    }

    public void setFuel(int n_fuel){
        fuel = n_fuel;
    }
}
