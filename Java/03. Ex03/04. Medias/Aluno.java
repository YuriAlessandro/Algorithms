public class Aluno{
	private Prova prova1;
	private Prova prova2;

	public Aluno(){

	}

	public Aluno(Prova p1, Prova p2){
		this.prova1 = p1;
		this.prova2 = p2;
	}

	public void setProva1(Prova p1){
		this.prova1 = p1;
	}

	public void setProva2(Prova p2){
		this.prova2 = p2;
	}

	public Prova getProva1(){
		return this.prova1;
	}

	public Prova getProva2(){
		return this.prova2;
	}


	public double calcularMedia(){
		return (this.prova1.calcularNotaTotal() + this.prova2.calcularNotaTotal())/2;
	}
}