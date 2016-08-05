
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

    public void setEstado(boolean n_estado){
        estado = n_estado;
    }

}
