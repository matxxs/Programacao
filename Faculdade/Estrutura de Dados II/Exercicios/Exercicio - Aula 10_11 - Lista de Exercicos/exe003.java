package lista11e12;

import java.util.Stack;

public class questao03 {
    public static boolean pilhasSaoIguais(Stack<Integer> p1, Stack<Integer> p2) {
        
        if (p1.size() != p2.size()) {
            return false;
        }

        while (!p1.isEmpty()) {
            if (!p1.pop().equals(p2.pop())) {
                return false; 
            }
        }

        
        return true;
    }

    public static void main(String[] args) {
        Stack<Integer> p1 = new Stack<>();
        p1.push(1);
        p1.push(2);
        p1.push(3);

        Stack<Integer> p2 = new Stack<>();
        p2.push(1);
        p2.push(2);
        p2.push(3);

        System.out.println("As pilhas são iguais? " + pilhasSaoIguais(p1, p2));
    }
}
