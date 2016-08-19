public class App{
	public static void main(String[] args){
		Lamp lamp = new Lamp(false);
		lamp.imprimir();

		lamp.ligar();
		lamp.imprimir();

		lamp.desligar();
		lamp.imprimir();
	}
}