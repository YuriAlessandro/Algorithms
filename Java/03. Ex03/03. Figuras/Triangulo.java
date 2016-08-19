public class Triangulo{
    private int b;
    private int h;

    public Triangulo(){

    }

    public Triangulo(int base, int alt){
    	this.b = base;
    	this.h = alt;
    }

    public void setBase(int base){
    	this.b = base;
    }

    public void setAltura(int alt){
    	this.h = alt;
    }

    public int getBase(){
    	return this.b;
    }

    public int getAltura(){
    	return this.h;
    }

    public double calcularArea(){
        return (b*h)/2;
    }
}