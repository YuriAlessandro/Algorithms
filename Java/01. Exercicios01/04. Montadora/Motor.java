
/**
 * Classe do motor de um carro.
 * 
 * @author Yuri Alessandro Martins
 * @version 03082016
 */
public class Motor
{
    private String combustivel;
    private String cilindradas;
    private boolean estado;

    public Motor(String fuel, String cld){
        estado = false;
        combustivel = fuel;
        cilindradas = cld;
    }

    // Getters
    public String getCombustivel(){
        return combustivel;
    }

    public String getCilindradas(){
        return cilindradas;
    }

    public boolean getEstado(){
        return estado;
    }

    // Setters
    public void setCombustivel(String n_fuel){
        combustivel = n_fuel;
    }

    public void setCilindradas(String n_cld){
        cilindradas = n_cld;
    }

    public void setOn(){
        estado = true;
    }

    public void setOff(){
        estado = false;
    }
}
