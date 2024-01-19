package projetoclasse;

public class Retangulo {
    
    //atributos
    
    private float base;
    private float altura;
    private float area;
    
    //metodos (construtor - responsavel por instanciar os objetos)
    
    Retangulo(float b, float a){
        this.base = b;
        this.altura = a;
    }
    
    public float calculaArea(){
        this.area = this.base * this.altura  ;
        return this.area;
    }
}
