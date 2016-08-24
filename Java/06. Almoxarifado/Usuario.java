public class Usuario{
    private String name;
    private String cpf;

    public Usuario(){

    }

    public Usuario(String name, String cpf){
        this.name = name;
        this.cpf = cpf;
    }

    public String getName(){
        return name;
    }

    public String getCpf(){
        return cpf;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setCpf(String cpf){
        this.cpf = cpf;
    }

}