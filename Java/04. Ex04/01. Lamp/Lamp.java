public class Lamp{
	private boolean estado;

	public Lamp(boolean p){
		this.estado = p;
	}

	public void ligar(){
		this.estado = true;
	}

	public void desligar(){
		this.estado = false;
	}

	public void imprimir(){
		System.out.println( (estado) ? "Lâmpada ligada" : "Lâmpada desligada");
	}
}