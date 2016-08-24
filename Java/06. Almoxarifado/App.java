import javax.swing.JOptionPane;

public class App{
    public static void main(String [] args){
        
        System.out.println("Criando novos usuários...");
        Usuario a1 = new Usuario("Yuri", "192.156.21-24");
        Usuario a2 = new Usuario("Emerson", "5982359");

        System.out.println("Usuário: " + a1.getName() + " - " + a1.getCpf());
        System.out.println("Usuário: " + a2.getName() + " - " + a2.getCpf());

        System.out.println("Criando produtos...");
        Produto p1 = new Produto("COMP", "Computador", 0, 1550.99);
        Produto p2 = new Produto("TEL", "Telefone", 50, 34.66);
        Produto p3 = new Produto("TEL", "Telefone Móvel", 20, 534.66);
        Produto p4 = new Produto("ALM", "Feijão", 1500, 10.99);
        Produto p5 = new Produto("ALM", "Macarrão", 2000, 6.99);
        
        System.out.println("\nCriando estoque... \n Adicionando produtos ao estoque...");
        Estoque e1 = new Estoque();
        e1.addProduto(p1);
        e1.addProduto(p2);
        e1.addProduto(p3);
        e1.addProduto(p4);

        System.out.println("\nListando produtos...");
        e1.listarProdutos();
        
        System.out.println("\nTentando remover um produto...");
        e1.removerProduto(p5);

        System.out.println("\nSolicitando produtos...");
        e1.solicitarProduto(a1, p1, 3);
        e1.solicitarProduto(a2, p2, 10);
        e1.solicitarProduto(a2, p2, 30);
        e1.solicitarProduto(a1, p3, 15);

        System.out.println("\nListando produtos após pedido...");
        e1.listarProdutos();

        System.out.println("\nListando solicitações...");
        e1.listarSolicitacoes();

        System.out.println("\nTentando achar produtos pelo nome...");
        e1.buscarProdutos("Feijão");
        e1.buscarProdutos("Trituradeira");

        System.out.println("Normal exiting...");
    }
}