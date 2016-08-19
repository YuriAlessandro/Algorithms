public class Trapezio{
    private int bmaior;
    private int bmenor;
    private int h;

    public Trapezio(){

    }

    public Trapezio(int basemaior, int basemenor, int alt){
    	if(basemaior < basemenor){
    		System.out.println("A Base maior é menor do que a base menor?");
    		System.exit(0);
    	}else{
	    	this.bmenor = basemenor;
	    	this.bmaior = basemaior;
	    	this.h = alt;
	    }

    }

    public void setBaseMaior(int basemaior){
    	this.bmaior = basemaior;
    }

    public void setBaseMenor(int basemenor){
    	this.bmenor = basemenor;
    }

    public void setAltura(int alt){
    	this.h = alt;
    }

    public int getBaseMaior(){
    	return this.bmaior;
    }

    public int getBaseMenor(){
    	return this.bmenor;
    }

    public int getAltura(){
    	return this.h;
    }

    public double calcularArea(){
        return ((bmaior + bmenor) / 2)*h;
    }
}