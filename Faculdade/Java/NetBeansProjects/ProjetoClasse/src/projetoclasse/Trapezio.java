package projetoclasse;

public class Trapezio {
    
    private float baseMenor;
    private float baseMaior;
    private float altura;
    private float area;
    
    Trapezio(float baseMenor,float baseMaior,float altura){
        this.baseMenor = baseMenor;
        this.baseMaior = baseMaior;
        this.altura = altura;         
    }
    
    public float calculaArea(){
        this.area = ((this.baseMenor + this.baseMaior) * this.altura) /2;
        return this.area;
    }
}
