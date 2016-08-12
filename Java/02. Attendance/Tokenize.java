/**
 * Tokeniza uma String em um conjunto de Strings.
 * 
 * @author Yuri Alessandro Martins 
 * @version 20161208
 */

import java.util.HashSet;

public class Tokenize{
    private String mes; /* !< String que deverá ser tokenizada. ∗/
    
    /**
     * @brief Construtor da classe de tokenização.
     */
    public Tokenize(String m_mes){
        mes = m_mes;
    }

    /**
     * @brief Tokeniza string.
     * @return Um conjunto com as strings tokenizadas.
     */
    public HashSet<String> getInput(){
        String[] wordArray = mes.split(" ");
        HashSet<String> words = new HashSet<String>();
        
        for (String word:wordArray){
            words.add(word);
        }
        
        return words;
    }
}