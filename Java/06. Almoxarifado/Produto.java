import java.time.LocalTime;
import java.util.Random;

public class Produto{
    String codigoProduto;
    String nomeProduto;
    int quantidade;
    double preco;
    LocalTime hora;

    public Produto(String codigoProduto, 
                    String nomeProduto,
                    int quantidade,
                    double preco){
        
        Random v = new Random();

        this.codigoProduto = "PROD-" + codigoProduto + v.nextInt(1000);
        this.nomeProduto = nomeProduto;
        this.quantidade = quantidade;
        this.preco = preco;
        this.hora = LocalTime.now();        
    }

    public String getCodigoProduto(){
        return this.codigoProduto;
    }
    public String getNomeProduto(){

        return this.nomeProduto;
    }

    public int getQuantidade(){
        return this.quantidade;
    }

    public double getPreco(){
        return this.preco;
    }

    public LocalTime getHora(){
        return this.hora;
    }

    public void setNomeProduto(String nomeProduto){
        this.nomeProduto = nomeProduto;
    }

    public void setQuantidade(int quantidade){
        this.quantidade = quantidade;
    }

    public void setPreco(double preco){
        this.preco = preco;
    }


}