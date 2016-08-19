public class Fracao{
    private int num;
    private int den;

    public void setNum(int n){
        this.num = n;
    }

    public void setDen(int d){
        this.den = d;
    }

    public int getNum(){
        return this.num;
    }

    public int getDen(){
        return this.den;
    }

    public void printFrac(){
        System.out.println(this.num + "\\" + this.den);
    }
    
    public Fracao multFrac(Fracao f){
        Fracao res = new Fracao();

        res.setNum(this.num * f.getNum());
        res.setDen(this.den * f.getDen());

        return res;
    }
}