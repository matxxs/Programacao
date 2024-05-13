package polimorfismo;

import javax.swing.JOptionPane;

public class Polimorfismo {

    
    public static void main(String[] args) {
        
        int opcao = 0;
        
        opcao = Integer.parseInt(JOptionPane.showInputDialog("Qual área deseja calcular"));
        
        switch (opcao) {
            case 1:
                Quadrado q = new Quadrado();
                q.setLado(Double.parseDouble(JOptionPane.showInputDialog("Informe o lado do quadrado")));
                q.area();
                JOptionPane.showMessageDialog(null, "A área é:" + q.getArea());
                break;
                
            case 2:
                Triangulo t = new Triangulo();
                t.setBase(Double.parseDouble(JOptionPane.showInputDialog("Informe a base")));
                t.setAltura(Double.parseDouble(JOptionPane.showInputDialog("Informe a altura")));
                t.area();
                JOptionPane.showMessageDialog(null, "A área é:" + t.getArea());
                break;
                
            case 3:
                Hexagono h = new Hexagono();
                h.setLado(Float.parseFloat(JOptionPane.showInputDialog("Informe o Lado:")));
                h.area(); 
                JOptionPane.showMessageDialog(null, "A área é: " + h.getArea());
                break;
                
            case 4:
                Circulo c = new Circulo();  
                c.setRaio(Double.parseDouble(JOptionPane.showInputDialog("Insira o Raio do Circulo:")));
                c.area();          
                JOptionPane.showMessageDialog(null,"A Area é: " + c.getArea());
                break;
                
            case 5:
                Cilindro cd = new Cilindro();
                cd.setAltura(Double.parseDouble(JOptionPane.showInputDialog("informe a altura do cilindro")));
                cd.setRaio(Double.parseDouble(JOptionPane.showInputDialog("Informe o raio o cilindro")));
                cd.Area();
                JOptionPane.showMessageDialog(null, "A area: " + cd.getArea());
                
                break;
        }
        
    }
    
}
