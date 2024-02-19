package polimorfismo;

public class Quadrado implements Forma{
       private double lado;
       private double area;

    public double getLado() {
        return lado;
    }

    public void setLado(double lado) {
        this.lado = lado;
    }

    public double getArea() {
        return area;
    }

    public void setArea(double area) {
        this.area = area;
    }
    
    //implementação do metodo da interface Forma 
    public void area(){
        
        this.area = this.lado * this.lado;
    }
}
