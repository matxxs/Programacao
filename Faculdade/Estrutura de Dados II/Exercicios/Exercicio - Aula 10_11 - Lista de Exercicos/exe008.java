package lista11e12;

class Chamada {
    double custo;
    int ordemChegada;

    public Chamada(double custo, int ordemChegada) {
        this.custo = custo;
        this.ordemChegada = ordemChegada;
    }
}

class Node {
    Chamada chamada;
    Node next;

    public Node(Chamada chamada) {
        this.chamada = chamada;
        this.next = null;
    }
}

public class questao08 {

    private Node front;
    private Node rear;

    public questao08() {
        this.front = null;
        this.rear = null;
    }

    public boolean isEmpty() {
        return front == null;
    }

    public void enqueue(double custo, int ordemChegada) {
        Chamada novaChamada = new Chamada(custo, ordemChegada);
        Node newNode = new Node(novaChamada);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            
            if (novaChamada.custo < front.chamada.custo) {
                newNode.next = front;
                front = newNode;
            } else {
               
                Node current = front;
                while (current.next != null && current.next.chamada.custo <= novaChamada.custo) {
                    current = current.next;
                }
                newNode.next = current.next;
                current.next = newNode;
                
                if (newNode.next == null) {
                    rear = newNode;
                }
            }
        }
    }

    public Chamada dequeue() {
        if (isEmpty()) {
            throw new IllegalStateException("A fila está vazia");
        }
        Chamada chamada = front.chamada;
        front = front.next;
        if (front == null) {
            rear = null;
        }
        return chamada;
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("A fila está vazia");
            return;
        }
        Node current = front;
        System.out.println("Fila de chamadas:");
        while (current != null) {
            System.out.println("Custo: " + current.chamada.custo + ", Ordem de chegada: " + current.chamada.ordemChegada);
            current = current.next;
        }
    }

    public static void main(String[] args) {
        questao08 fila = new questao08();
        fila.enqueue(100.0, 1);
        fila.enqueue(50.0, 2);
        fila.enqueue(200.0, 3);
        fila.enqueue(150.0, 4);

        System.out.println("Fila de chamadas antes da remoção:");
        fila.display();

        Chamada chamadaRemovida = fila.dequeue();
        System.out.println("\nChamada removida: Custo: " + chamadaRemovida.custo + ", Ordem de chegada: " + chamadaRemovida.ordemChegada);

        System.out.println("\nFila de chamadas após a remoção:");
        fila.display();
    }
}
