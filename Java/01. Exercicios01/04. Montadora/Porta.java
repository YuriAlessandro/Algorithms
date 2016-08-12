
/**
 * Classe da porta de um carro.
 * 
 * @author Yuri Alessandro Martins
 * @version 03082016
 */
public class Porta{
    private boolean estado;

    public Porta(){
        estado = false;
    }

    public void setOpen(){
        estado = true;
    }

    public void setClose(){
        estado = false;
    }

    public boolean getEstado(){
        if(estado) return true;
        else return false;
    }
}
