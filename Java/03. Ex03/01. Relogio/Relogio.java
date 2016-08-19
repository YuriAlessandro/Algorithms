public class Relogio{
    private Ponteiro ponteiroHora;
    private Ponteiro ponteiroMinuto;
    private Ponteiro ponteiroSegundo;

    public void acertarRelogio(int h, int m, int s){
        ponteiroHora = new Ponteiro();
        ponteiroMinuto = new Ponteiro();
        ponteiroSegundo = new Ponteiro();
        
        this.ponteiroHora.setPos(h%24);
        this.ponteiroMinuto.setPos(m%60);
        this.ponteiroSegundo.setPos(s%60);
    }

    public int lerHora(){
        return this.ponteiroHora.getPos();
    }

    public int lerMinuto(){
        return this.ponteiroMinuto.getPos();
    }

    public int lerSegundo(){
        return this.ponteiroSegundo.getPos();
    }


}