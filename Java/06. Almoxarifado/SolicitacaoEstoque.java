import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.time.ZonedDateTime;

public class SolicitacaoEstoque{
    private Usuario solicitante;
    private Produto produto;
    private int quantidade;
    private LocalDateTime data;

    public SolicitacaoEstoque(Usuario solicitante, 
                                Produto produto, int quantidade){
        this.solicitante = solicitante;
        this.produto = produto;
        this.quantidade = quantidade;
        this.data = LocalDateTime.now();
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

    public LocalDateTime getData(){
        return this.data;
    }

}