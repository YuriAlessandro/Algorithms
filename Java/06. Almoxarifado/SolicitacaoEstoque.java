import java.time.LocalTime;

public class SolicitacaoEstoque{
    private Usuario solicitante;
    private Produto produto;
    private int quantidade;
    private LocalTime data;

    public SolicitacaoEstoque(Usuario solicitante, 
                                Produto produto, int quantidade){
        this.solicitante = solicitante;
        this.produto = produto;
        this.quantidade = quantidade;
        this.data = LocalTime.now();
    }

    public Usuario getSolicitante(){
        return this.solicitante;
    }

    public Produto getProduto(){
        return this.produto;
    }

    public int getQuantidade(){
        return this.quantidade;
    }

    public LocalTime getData(){
        return this.data;
    }
}