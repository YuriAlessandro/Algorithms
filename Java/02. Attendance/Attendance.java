/**
 * Classe com a função principal do programa, que irá receber a entrada do usuário
 * e gerenciar as demais classes.
 * 
 * @author Yuri Alessandro Martins 
 * @version 20161208
 */

import java.util.Scanner;
import java.util.HashSet;

public class Attendance{
    public static void main(String [] args){
        
        Scanner client = new Scanner(System.in);
        System.out.println("Tudo bem. Em que posso lhe ajudar?\n" + 
            "Estamos dispostos a descobrir o que há de errado com seu computador...\n\t" +
            "USE \"s\" para respostas positivas\n \t" +
            "USE \"n\" para respostas negativas\n \t" +
            "USE \"y\" para sair do programa \n");
        String mes;
        Tokenize mes_client;
        HashSet<String> tk;
        Answers rep;

        while(true){
            System.out.print("> ");
            mes = client.nextLine().trim().toLowerCase();
            
            if (mes.equals("y")){
                break;
            }

            mes_client = new Tokenize(mes);  
            tk = mes_client.getInput();

            rep = new Answers();
            String found = null;

            LOOP : for(String tkz : tk){
                found = rep.getResults(tkz);
            }

            if (found == null) System.out.println("\tTente ser mais especifico...");
            else System.out.println(found);

        }
    }
}