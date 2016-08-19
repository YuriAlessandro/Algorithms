public class Circunferencia{
    private int r;

    public Circunferencia(){
    }

    public Circunferencia(int raio){
    	this.r = raio;
    }

    public void setRaio(int raio){
    	this.r = raio;
    }

    public int getRaio(){
    	return this.r;
    }

    public double calcularArea(){
        return Math.PI * (r*r); 
    }
}