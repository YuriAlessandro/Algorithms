
/**
 * Classe de um aquecedor com limites de temperatura.
 * 
 * @author Yuri Alessandro Martins 
 * @version 08022016
 */
public class Header
{
    private int temperature, min, max, increment;

    public Header(int n_min, int n_max){
        min = n_min;
        max = n_max;
        increment = 5;
        if (max < 15) temperature = max;
        else if (min > 15) temperature = min;
        else temperature = 15;
    }

    public int getTemperature(){
        return temperature;
    }

    public void Warmer(){
        int tmp = temperature + increment;
        temperature = (tmp > max) ? temperature : tmp;
    }

    public void Cooler(){
        int tmp = temperature - increment;
        temperature = (tmp < min) ? temperature : tmp;
    }

    public void setIncrement(int n_increment){
        if(n_increment > 0)
            increment = n_increment;
        else
            System.out.println("Valor invalido: " + n_increment + ". Tente valores maiores que 0.");
    }
}
