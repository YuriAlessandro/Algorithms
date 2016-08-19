public class Turma{
	private Aluno aluno1;
	private Aluno aluno2;
	private Aluno aluno3;

	public Turma(){

	}

	public Turma(Aluno a1, Aluno a2, Aluno a3){
		this.aluno3 = a3;
		this.aluno2 = a2;
		this.aluno1 = a1;
	}

	public void setAluno1(Aluno a1){
		this.aluno1 = a1;
	}

	public void setAluno2(Aluno a2){
		this.aluno2 = a2;
	}

	public void setAluno3(Aluno a3){
		this.aluno3 = a3;
	}

	public Aluno getAluno1(){
		return this.aluno1;
	}

	public Aluno getAluno2(){
		return this.aluno2;
	}

	public Aluno getAluno3(){
		return this.aluno3;
	}

	public double calcularMedia(){
		return (this.aluno1.calcularMedia() + 
				this.aluno2.calcularMedia() + 
				this.aluno3.calcularMedia()) / 3;
	}
}