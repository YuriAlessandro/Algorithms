/**
 * Armazena e confere em um HashMap as palavras-chave x respostas do programa.
 * 
 * @author Yuri Alessandro Martins 
 * @version 20161208
 */

import java.util.HashMap;

public class Answers{
    private HashMap <String, String> answers;
    String found;

    public Answers(){

        this.found = null;

        answers = new HashMap<String, String>();
        answers.put("internet", "Você já verificou a conexão?");
        answers.put("computador", "Ele está realmente ligado?");
        answers.put("teclado", "Você já verificou se seu teclado está plugado?");
        answers.put("mouse", "Você já verificou se seu mouse está plugado?");
        answers.put("monitor", "Você já verificou se ele está conectado a rede elétrica?");
        answers.put("tela", "Você já verificou se ele está conectado a rede elétrica?");
        answers.put("s", "Então qual o problema, afinal?");
        answers.put("n", "Então o problema deve estar ai.");
        answers.put("plugado", "Você já verificou se a entrada está funcionando corretamente?");
        answers.put("energia", "Espera! Tem ernergia no seu computador?");
    }

    public String getResults(String key){
        String resp = answers.get(key);

        if (resp != null){
            this.found = resp;
        }

        return this.found;
    }

}