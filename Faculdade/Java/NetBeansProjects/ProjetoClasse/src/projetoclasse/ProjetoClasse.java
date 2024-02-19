package projetoclasse;


import javax.swing.JOptionPane;


public class ProjetoClasse{
    
    public static void main(String [] args) {  
        JOptionPane.showMessageDialog(null, "Projeto Classe");
        
        // Retangulo
        
        float baseR = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o valor da base:"));
        float alturaR = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o valor da altura:"));
        
        Retangulo rtglo = new Retangulo(baseR, alturaR);
        
        JOptionPane.showMessageDialog(null, "O valor da area do Retangulo: " + rtglo.calculaArea() + "cm2");
        
        // Triangulo
        
        float baseT = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o valor da base:"));
        float alturaT = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o valor da altura:"));
        
        Triangulo taglo = new Triangulo(baseT, alturaT);
        
        JOptionPane.showMessageDialog(null, "O valor da area do Triangulo: " + taglo.calculaArea() + "cm2");
        
        
       
/*        
    
    // Triangulo
    
    System.out.print("Digite o valor da base: ");
    base = entrada.nextFloat();
    System.out.print("Digite o valor da altura: ");
    altura = entrada.nextFloat();
    Triangulo t = new Triangulo(base, altura);
    System.out.println("O valor da area do Triangulo: " + t.calculaArea() + "cm2");
       
    //Trapezio
    
    float baseMenor;
    float BaseMaior; 
    
    System.out.print("Digite o valor da Base Menor: ");
    baseMenor = entrada.nextFloat();
    System.out.print("Digite o valor da Base Maior: ");
    BaseMaior = entrada.nextFloat();
    System.out.print("Digite o valor da altura: ");
    altura = entrada.nextFloat();
    Trapezio tp = new Trapezio(baseMenor, BaseMaior, altura);
    System.out.println("O valor da area do Trapezio: " + tp.calculaArea() + "cm2");
    
    //Hexagono
    float perimetro;
    
    System.out.print("Digite o valor perimetro: ");
    perimetro = entrada.nextFloat();
    Hexagono h = new Hexagono(perimetro);
    System.out.println("O valor da area do Hexagono: " + h.calculaArea() + "m2");
     */
    }
    
}
