package lista11e12;

import java.util.Stack;

public class questao05 {

    public static boolean formulaBemFormada(String formula) {
        Stack<Character> pilha = new Stack<>();

        for (int i = 0; i < formula.length(); i++) {
            char caractere = formula.charAt(i);
            if (caractere == '(') {
                pilha.push(caractere);
            } else if (caractere == ')') {
                // Se a pilha estiver vazia ou o topo não for um parêntese de abertura, a fórmula está mal formada
                if (pilha.isEmpty() || pilha.pop() != '(') {
                    return false;
                }
            }
        }

        // Se a pilha estiver vazia, significa que todos os parênteses de abertura têm um correspondente de fechamento
        return pilha.isEmpty();
    }

    public static void main(String[] args) {
        String formula1 = "((9+5) + 8)";
        String formula2 = "(10*4)+((9+5)";

        System.out.println("Fórmula 1 bem formada? " + formulaBemFormada(formula1));
        System.out.println("Fórmula 2 bem formada? " + formulaBemFormada(formula2));
    }
}

