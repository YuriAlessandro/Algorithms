public class Data{
	
	private int dia;
	private int mes;
	private int ano;
	private int hora;
	private int min;
	private int sec;
	private boolean t_hora;

	public static final boolean FORMATO_12H;
    public static final boolean FORMATO_24H;

    static{
    	FORMATO_12H = false;
    	FORMATO_24H = true;
    }

	
	public Data(int d, int m, int a){
		this.dia = d;
		this.mes = m;
		this.ano = a;

		this.t_hora = false;
	}

	public Data(int d, int m, int a, int h, int mi, int s){
		this(d, m, a);
		this.hora = h;
		this.min = mi;
		this.sec = s;

		this.t_hora = true;
	}

	public int getDia(){
		return this.dia;
	}

	public int getMes(){
		return this.mes;
	}

	public int getAno(){
		return this.ano;
	}

	public int getHora(){
		return this.hora;
	}

	public int getMin(){
		return this.min;
	}

	public int getSec(){
		return this.sec;
	}

	public void imprimir(boolean format){
		String data = this.dia + "/" + this.mes + "/" + this.ano;  
		String shora;
		
		if(t_hora){
			if (format){
			data += " " + this.hora%24 + ":" + this.min + ":" + this.sec;
			}else{
				if (this.hora > 12)
					data += " " + this.hora%12 + ":" + this.min + ":" + this.sec + " PM";
				else
					data += " " + this.hora%12 + ":" + this.min + ":" + this.sec + " AM";
			}
		}
		System.out.println(data);
	}
}