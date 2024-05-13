package lista11e12;

import java.util.Scanner;
import java.util.Stack;

public class questao01 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Stack<String> pilhaDeTarefas = new Stack<>();

        int opcao;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Inserir tarefa na pilha");
            System.out.println("2. Recuperar próxima tarefa da pilha");
            System.out.println("0. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Digite a descrição da nova tarefa: ");
                    String novaTarefa = scanner.nextLine();
                    pilhaDeTarefas.push(novaTarefa);
                    System.out.println("Tarefa adicionada à pilha.");
                    break;
                case 2:
                    if (!pilhaDeTarefas.isEmpty()) {
                        String proximaTarefa = pilhaDeTarefas.pop();
                        System.out.println("Próxima tarefa: " + proximaTarefa);
                    } else {
                        System.out.println("A pilha de tarefas está vazia.");
                    }
                    break;
                case 0:
                    System.out.println("Encerrando o programa...");
                    break;
                default:
                    System.out.println("Opção inválida. Por favor, escolha uma opção válida.");
            }
        } while (opcao != 0);

        scanner.close();
    }
}
