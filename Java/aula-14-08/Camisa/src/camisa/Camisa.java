
public class Camisa {

    //Atributos
    private String modelo;  
    private String tamanho;
    private String cor;
    private float largura;
    private String tipoTecido;
    private String genero;
    private float valor;
    private String marca;
    
    // Metodos de classe
    
    public void inserir (){
       this.modelo = "Polo, MCD ";
       this.cor = "Azul";
       this.valor = 50;
    }
    
    public void mostra() {
        System.out.println("\nCamisa: " + this.modelo + "\nCor: " + this.cor );
    }
}
