public class Quadrado{
    private int l;

    public Quadrado(){
    }

    public Quadrado(int lado){
    	this.l = lado;
    }

    public void setLado(int lado){
    	this.l = lado;
    }

    public int getLado(){
    	return this.l;
    }

    public double calcularArea(){
        return l*l;
    }
}