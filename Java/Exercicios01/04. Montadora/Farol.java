
/**
 * Classe de farol de um carro.
 * 
 * @author Yuri Alessandro Martins   
 * @version 03082016.1937
 */
public class Farol
{
    private boolean estado;

    public Farol(){
        estado = false;
    }

    public boolean getEstado(){
        return estado;
    }

    public void turnOn(){
        estado = true;
    }

    public void turnOff(){
        estado = false;
    }

}
