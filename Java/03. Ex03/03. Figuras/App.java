public class App{
	public static void main(String [] args){
		Circunferencia c = new Circunferencia(5);
		Quadrado q = new Quadrado(10);
		Trapezio a = new Trapezio(10, 5, 8);
		Triangulo t = new Triangulo(5, 15);

		System.out.println("Area da Circunferencia: " + c.calcularArea());
		System.out.println("Area do Quadrado: " + q.calcularArea());
		System.out.println("Area do Trapezio: " + a.calcularArea());
		System.out.println("Area do Triangulo: " + t.calcularArea());
	}
}