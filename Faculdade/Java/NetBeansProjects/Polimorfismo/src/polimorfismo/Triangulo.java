package polimorfismo;

public class Triangulo implements Forma {
 
    private double base;
    private double area;
    private double altura;

    public double getBase() {
        return base;
    }

    public void setBase(double lado) {
        this.base = lado;
    }

    public double getArea() {
        return area;
    }

    public void setArea(double area) {
        this.area = area;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    //implementação do metodo da interface Forma 
    public void area (){
        
        this.area = (this.base * this.altura) /2;
    }
}
