public class App{
	public static void main(String[] args){
		Aluno a = new Aluno(new Prova(4.0, 2.5), new Prova(1.0, 7.0));
		Aluno b = new Aluno(new Prova(6.5, 3.5), new Prova(0.0, 3.0));
		Aluno c = new Aluno(new Prova(5.0, 4.0), new Prova(6.0, 1.5));

		Turma turma = new Turma(a, b, c);

		System.out.println("Media do aluno1: " + a.calcularMedia());
		System.out.println("Media do aluno2: " + b.calcularMedia());
		System.out.println("Media do aluno3: " + c.calcularMedia());
		System.out.println("Media da turma: " + turma.calcularMedia());
	}
}