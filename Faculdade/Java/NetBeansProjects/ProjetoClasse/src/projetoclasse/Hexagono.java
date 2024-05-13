package projetoclasse;

public class Hexagono {
    
    private float perimetro;
    private float lado;
    private float area;
    
    Hexagono(float perimetro){
        this.perimetro = perimetro;
       
    }
    
    public float calculaArea(){
       this.lado = this.perimetro / 6;
       this.area = (float) (3 * (this.lado * this.lado) * Math.sqrt(3)) / 2 ;
       return area;
    }
}
