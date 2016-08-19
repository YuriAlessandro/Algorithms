public class Aplicacao{
    public static void main(String [] args){
        Fracao f1 = new Fracao();
        f1.setNum(5);
        f1.setDen(2);
        f1.printFrac();

        Fracao f2 = new Fracao();
        f2.setNum(4);
        f2.setDen(8);
        f2.printFrac();

        Fracao f3 = f1.multFrac(f2);
        f3.printFrac();
    }
}