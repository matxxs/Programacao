package classes;


public class PessoaJuridica extends Pessoa{
    private String cnpj;
    private String razaoSocial;
    
     // Metodos

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getRazaoSocial() {
        return razaoSocial;
    }

    public void setRazaoSocial(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }

    
    
    
}
