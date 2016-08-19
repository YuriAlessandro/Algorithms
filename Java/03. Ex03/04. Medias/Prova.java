public class Prova{
	private double notaParte1;
	private double notaParte2;

	public Prova(){

	}

	public Prova(double np1, double np2){
		this.notaParte1 = np1;
		this.notaParte2 = np2;
	}

	public void setNotaParte1(double np1){
		this.notaParte1 = np1;
	}

	public void setNotaParte2(double np2){
		this.notaParte2 = np2;
	}

	public double getNotaParte1(){
		return this.notaParte1;
	}

	public double getNotaParte2(){
		return this.notaParte2;
	}

	public double calcularNotaTotal(){
		double res = this.notaParte1 + this.notaParte2;
		res = (res > 10) ? 10 : res;
		return res;
	}
}