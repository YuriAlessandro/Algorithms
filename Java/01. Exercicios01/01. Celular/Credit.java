
/**
 * Classe que controla créditos de um celular.
 * 
 * @author Yuri Alessandro Martins
 * @version 08022016
 */
public class Credit
{
    private int credits;

    public Credit(){
    	credits = 1000;
    }

    public Credit( int value ){
    	if ( value >= 0 )
    		credits = value;
    	else{
    		credits = 0;
    		System.out.println("Construtor chamado com valor negativo: " + value);
    	}
    }

    public int getCredits(){
    	return credits;
    }

    public void setCredits( int n_value ){
    	if ( n_value >= 0 )
    		credits = n_value;
    	else
    		System.out.println("setCredits foi chamado com um valor negativo: " + n_value);
    }

    public void setUp( int n_credits ){
    	if ( n_credits >= 0 )
    		credits += n_credits;
    	else
    		System.out.println("setUp foi chamado com um valor negativo: " + n_credits);
    }

    public void setDown( int take ){
    	if ( take >= 0 )
    		credits -= take;
    	else
    		System.out.println("setDown foi chamado com um valor negativo: " + take);
    }
}
