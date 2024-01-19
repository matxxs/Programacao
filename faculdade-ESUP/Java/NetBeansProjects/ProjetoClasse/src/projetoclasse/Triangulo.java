package projetoclasse;

public class Triangulo {
    
    private float base;
    private float altura;
    private float area;
    
    Triangulo(float b, float a){
        this.base = b;
        this.altura = a;
    }
    
    public float calculaArea(){
        this.area = (this.base * this.altura) / 2 ;
        return this.area;
    }
}
