public class Aplicacao{
    public static void main(String [] args){
        Relogio relogio1 = new Relogio();

        relogio1.acertarRelogio(36, 1, 2);

        System.out.println(relogio1.lerHora() + "h:" +
                            relogio1.lerMinuto() + "m:" +
                            relogio1.lerSegundo() + "s");

    }
}