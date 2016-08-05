
/**
 * Classe para montagem de um carro, com farois, motor, portas, rodas e tanque de combustivel.
 * 
 * @author Yuri Alessandro Martins
 * @version 03082016.1939
 */
public class Carro{
  	private String cor;
    private int n_marchas;
    private int n_portas;
    private int vel_at;
    private int km_rodado;
    private int km_litro;
    private int at_marcha;
    private int id_marcha;
    private Porta[] portas;
    private Roda[] rodas;
    private Motor motor;
    private Tanque tanque;
    private Farol farol;

    public Carro(String m_cor, int num_marchas, int num_portas, String combustivel, 
    				String cilindradas, int aro, int press, int tanqueCap, int tanAcTotal){
        cor = m_cor;
        n_portas = num_portas;
        vel_at = 0;
        km_rodado = 0;
        km_litro = 6;
        at_marcha = 0;
        id_marcha = 0;
        n_marchas = (num_marchas > 5) ? num_marchas : 5;

        this.criaPortas();
        motor = new Motor(combustivel, cilindradas);
        this.criaRodas(aro, press);
        tanque = new Tanque(tanqueCap, tanAcTotal);
        farol = new Farol();

    }

    // Getters
    public String getCor(){
    	return cor;
    }

    public int getMarchas(){
    	return n_marchas;
    }

    public int getVelAt(){
    	return vel_at;
    }

    public void getEstadoPortas(){
    	for(int i = 0; i < n_portas; i++){
    		if (portas[i].getEstado())
    			System.out.println("Porta " + i + ": Aberta.");
    		else 
    			System.out.println("Porta " + i + ": Fechada.");
    	}
    }

    // Setters
    public void setCor(String n_cor){
    	cor = n_cor;
    }

    public void setMarchas(int m_marchas){
    	n_marchas = m_marchas;
    }

    public void setVelAt(int n_vel){
    	vel_at = n_vel;
    }

    public void setNumPortas(int n){
    	portas = null;
    	n_portas = n;
    	this.criaPortas();
    }

    public void setPortaAberta(int n){
    	System.out.println("Abrindo porta " + n);
    	if(portas[n].getEstado() != true) portas[n].setOpen();
    	else System.out.println("A porta " + n + " ja estava aberta.");
    }

    public void setPortaFechada(int n){
    	System.out.println("Fechando porta " + n);
    	if(portas[n].getEstado() != false) portas[n].setClose();
    	else System.out.println("A porta " + n + " ja estava fechada.");
    }

    // Methods
    private void criaPortas(){
    	portas = new Porta[n_portas];
    	for(int i = 0; i < n_portas; i++)
    		portas[i] = new Porta();
    }

    private void criaRodas(int aro, int press){
    	rodas = new Roda[4];
    	for(int i = 0; i < 4; i++)
    		rodas[i] = new Roda(aro, press);
    }

    public void ligarCarro(){
    	if (!motor.getEstado()) 
    		motor.setOn();
    	else System.out.println("Opa! O carro ja esta ligado.");
    }

    public void desligarCarro(){
    	if (motor.getEstado()) 
    		motor.setOff();
    	else System.out.println("Opa! O carro ja esta desligado.");
    }

    public void acelerarCarro(int velocidade){
    	if(motor.getEstado()){
            if( velocidade >= 0){
                vel_at = velocidade;
        		km_rodado += vel_at;
            }else
                System.out.println("Tente velocidades positivas.");
    	}
    	else
    		System.out.println("Tente ligar o carro antes de acelerar.");

        int consumo = vel_at/this.km_litro;
        tanque.setFuel( tanque.getFuel() - consumo );
        if( tanque.getFuel() <= 0 ){
            System.out.println("Ihhh, parece que acabou o combustivel. Que tal reabastecer?");
            tanque.setFuel(0);
        }
    }

    public void freiarCarro(int val_freio){
    	if(motor.getEstado()) 
    		System.out.println("Que tal parar o carro para desligar?");
    	else{
    		vel_at -= val_freio;
    		if(vel_at < 0) vel_at = 0;
    	}
    }

    public void abastecerTanque(int adc){
    	if (tanque.getFuel() + adc < tanque.getCap())
    		tanque.setCap( tanque.getFuel() + adc );
    	else
    		System.out.println("Opa. Isso eh muito para esse tanque.");
    }

    public void ligarFarol(){
    	if(farol.getEstado())
    		System.out.println("O farol ja esta ligado.");
    	else
    		farol.turnOn();
    }

    public void desligarFarol(){
    	if(!farol.getEstado())
    		System.out.println("O farol ja esta desligado.");
    	else
    		farol.turnOff();
    }

    public void ativarBuzina(){
    	System.out.println("Bii Bii");
    }

    public void painelDoCarro(){
    	System.out.println("///// PAINEL /////");
    	
    	System.out.print("Motor: ");
    	if (motor.getEstado()) 	System.out.println("Ligado");
    	else					System.out.println("Desligado");

    	System.out.print("Farol: ");
    	if (farol.getEstado()) 	System.out.println("Ligado.");
    	else			System.out.println("Desligado.");

    	System.out.print("Combustivel: ");
    	float per = ((float)tanque.getFuel()/tanque.getCap()) * 100;
    	System.out.println(per + "%");

    	System.out.println("Velocidade: " + vel_at);

    	System.out.println("KM Rodado: " + km_rodado);

    }	
}
