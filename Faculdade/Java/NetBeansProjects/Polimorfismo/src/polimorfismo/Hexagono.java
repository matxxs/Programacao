package polimorfismo;

public class Hexagono {
    
    private float lado;
    private float area;
    

    public float getLado() {
        return lado;
    }

    public void setLado(float lado) {
        this.lado = lado;
    }

    public float getArea() {
        return area;
    }

    public void setArea(float area) {
        this.area = area;
    }    
     
    public void area() {
        this.area = (float) ((3 * Math.sqrt(3) * Math.pow(lado, 2)) / 2);
    }


}
