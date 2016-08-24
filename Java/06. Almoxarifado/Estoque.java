import java.util.ArrayList;
import java.time.LocalTime;
import javax.swing.JOptionPane;
import java.awt.Component;

public class Estoque{
    private ArrayList<Produto> prods;
    private ArrayList<SolicitacaoEstoque> calls;

    public Estoque(){
        this.prods = new ArrayList<Produto>();
        this.calls = new ArrayList<SolicitacaoEstoque> ();
    }

    public void addProduto(Produto produto){
        if(produto.getQuantidade() > 0){
            this.prods.add(produto);
            JOptionPane.showMessageDialog(null, "Produto \"" + produto.getNomeProduto() + "\" adicionado ao estoque.");
        }else{
            JOptionPane.showMessageDialog(null, "Produto \"" + 
                                produto.getNomeProduto() +
                                "\" com quantidade inválida.", "NÃO FOI POSSÍVEL ADICIONAR ESSE PRODUTO!", JOptionPane.ERROR_MESSAGE);
        }
    }

    public void removerProduto(Produto produto){
        JOptionPane.showMessageDialog(null, "Tentando remover produto \"" + produto.getCodigoProduto() + "\" do estoque...");
        if (this.prods.contains(produto))
            this.prods.remove(produto);
        else JOptionPane.showMessageDialog(null, "Esse produto <" 
                                            + produto.getNomeProduto() + 
                                            "> não consta no sistema.", 
                                            "Error", JOptionPane.ERROR_MESSAGE);
    }

    public void listarProdutos(){
        String stringBuilder = "Produtos no estoque:\n";
        
        for(Produto prod : prods){
            stringBuilder += " -> " + prod.getNomeProduto() + 
                            "\n | COD: " + prod.getCodigoProduto() + 
                            "\t | QUANT: " + prod.getQuantidade() + 
                            "\t | R$: " + prod.getPreco() + " |\n";
        }
        
        JOptionPane.showMessageDialog(null, stringBuilder);
    }

    public void solicitarProduto(Usuario usuario, 
                                    Produto produto, 
                                    int quantidade){
        JOptionPane.showMessageDialog(null, "Solicitando " + quantidade + " produtos \"" + produto.getNomeProduto() + "\" no estoque.");

        if (produto.getQuantidade() > 0){
            produto.setQuantidade(produto.getQuantidade() - quantidade);
            calls.add(new SolicitacaoEstoque(usuario, produto, produto.getQuantidade()));
        }else{
            JOptionPane.showMessageDialog(null, "Produto \"" + 
                                produto.getNomeProduto() +
                                "\" não existe no estoque ou não tem estoque disponível", "ERROR", JOptionPane.ERROR_MESSAGE);
        }
    }

    public void listarSolicitacoes(){
        String stringBuilder = "Lista de Solicitações:\n";
        
        for (SolicitacaoEstoque s : calls)
            stringBuilder += " -> " + s.getProduto().getNomeProduto() + " - " + s.getSolicitante().getName() + "\n";
       
       JOptionPane.showMessageDialog(null, stringBuilder + "\nTotal de pedidos: " + calls.size());

    }

    
    public void buscarProdutos(String nome){
        for(int i = 0; i < calls.size(); i++){
            
        }
    }
    
}