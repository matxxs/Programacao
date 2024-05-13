/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author Asus
 */
public class Cilindro implements Forma{
    
    private  double raio ;
    
    private double altura;
    
    private double areaTotal;
    
    private double areabase ;
    
    private double arealateral;
    
    
    

    public double getRaio() {
        return raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public double getArea() {
        return areaTotal;
    }

    public void setArea(double areaTotal) {
        this.areaTotal = areaTotal;
    }
    
    public double getAreabase() {
        return areabase;
    }

    public void setAreabase(double areabase) {
        this.areabase = areabase;
    }

    public double getArealateral() {
        return arealateral;
    }

    public void setArealateral(double arealateral) {
        this.arealateral = arealateral;
    }
    
    public void Area(){
        
        
    }

    @Override
    public void area() {
        
        this.areabase = Math.PI * Math.pow(this.raio, 2);
        
        this.arealateral = 2 * Math.PI * this.raio * this.altura;
        
        this.areaTotal = 2 * this.areabase + this.arealateral;
        
    }


    
}
