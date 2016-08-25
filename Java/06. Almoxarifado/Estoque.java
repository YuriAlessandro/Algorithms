import java.util.ArrayList;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import javax.swing.JOptionPane;
import java.util.Iterator;
import java.lang.StringBuilder;
import java.text.NumberFormat;
import java.util.Locale;

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
            JOptionPane.showMessageDialog(null, "Produto \"" + produto.getNomeProduto() + 
                                            "\" adicionado ao estoque.");
        }else{
            JOptionPane.showMessageDialog(null, "Produto \"" + 
                                produto.getNomeProduto() +
                                "\" com quantidade inválida.", 
                                "NÃO FOI POSSÍVEL ADICIONAR ESSE PRODUTO!", 
                                JOptionPane.ERROR_MESSAGE);
        }
    }

    public void removerProduto(Produto produto){
        JOptionPane.showMessageDialog(null, "Tentando remover produto \"" + 
                                        produto.getCodigoProduto() + "\" do estoque...");
        if (this.prods.contains(produto))
            this.prods.remove(produto);
        else JOptionPane.showMessageDialog(null, "Esse produto <" 
                                            + produto.getNomeProduto() + 
                                            "> não consta no sistema.", 
                                            "Error", JOptionPane.ERROR_MESSAGE);
    }

    public void listarProdutos(){
        StringBuilder stringBuilder = new StringBuilder("Produtos no estoque:\n");
        
        Locale l = new Locale("pt", "BR");  
        NumberFormat nf = NumberFormat.getCurrencyInstance(l);

        for(Produto prod : this.prods){
            stringBuilder.append(" -> " + prod.getNomeProduto() + 
                            "\n | COD: " + prod.getCodigoProduto() + 
                            " | QUANT: " + prod.getQuantidade() + 
                            " | " + nf.format( prod.getPreco() ) + " |\n");
        }
        
        JOptionPane.showMessageDialog(null, stringBuilder);
    }

    public void solicitarProduto(Usuario usuario, 
                                    Produto produto, 
                                    int quantidade){
        JOptionPane.showMessageDialog(null, "Solicitando [" + quantidade + 
                                        "] produtos \"" + produto.getNomeProduto() + 
                                        "\" no estoque.");

        if (produto.getQuantidade() > 0){
            produto.setQuantidade(produto.getQuantidade() - quantidade);
            calls.add(new SolicitacaoEstoque(usuario, produto, quantidade));
        }else{
            JOptionPane.showMessageDialog(null, "Produto \"" + 
                                produto.getNomeProduto() +
                                "\" não existe no estoque ou não tem estoque disponível.", 
                                "ERROR", JOptionPane.ERROR_MESSAGE);
        }
    }

    public void listarSolicitacoes(){
        StringBuilder stringBuilder = new StringBuilder("Lista de Solicitações:\n");
        
        for (SolicitacaoEstoque s : this.calls)
            stringBuilder.append(" -> " + s.getProduto().getNomeProduto() + " [" +
                                    s.getQuantidade() + "] - " + 
                                    s.getSolicitante().getName() +
                                    " [" + s.getData().toLocalDate() + "] \n");
       
       JOptionPane.showMessageDialog(null, stringBuilder + "\nTotal de pedidos: " + 
                                        this.calls.size());

    }

    public void buscarProdutos(String nome){
        boolean found = false;
        Locale l = new Locale("pt", "BR");
        NumberFormat nf = NumberFormat.getCurrencyInstance();

        for(Iterator<Produto> it = this.prods.iterator(); it.hasNext();){
            Produto myProd = it.next();
            
            if( myProd.getNomeProduto() == nome){
                JOptionPane.showMessageDialog(null, "Informações do produto:\n"+
                                                " | COD: " + myProd.getCodigoProduto() + 
                                                " | NOME: " + myProd.getNomeProduto() +
                                                " | QUANT: " + myProd.getQuantidade() + 
                                                " | " + nf.format( myProd.getPreco() ) + " |\n");
                found = true;
            }
        }

        if(found == false) JOptionPane.showMessageDialog(null, "Produto " + nome + 
                                                        " não encontrado.", "ERROR", 
                                                        JOptionPane.ERROR_MESSAGE);
    }
}