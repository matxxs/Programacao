package lista11e12;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class questao06 {

    private Node front;
    private Node rear;

    public questao06() {
        this.front = null;
        this.rear = null;
    }

    public boolean isEmpty() {
        return front == null;
    }

    public void enqueue(int data) {
        Node newNode = new Node(data);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear.next = newNode;
            rear = newNode;
        }
    }

    public int dequeue() {
        if (isEmpty()) {
            throw new IllegalStateException("A fila está vazia");
        }
        int data = front.data;
        front = front.next;
        if (front == null) {
            rear = null;
        }
        return data;
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("A fila está vazia");
            return;
        }
        Node current = front;
        System.out.print("Fila: ");
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    public void moveMenor() {
        if (isEmpty()) {
            return; 
        }

        Node current = front;
        Node previous = null;
        Node menor = front;
        Node anteriorMenor = null;

        
        while (current != null) {
            if (current.data < menor.data) {
                menor = current;
                anteriorMenor = previous;
            }
            previous = current;
            current = current.next;
        }

        if (menor == front) {
            return;
        }

        anteriorMenor.next = menor.next;

        menor.next = front;
        front = menor;
    }

    public static void main(String[] args) {
        questao06 fila = new questao06();
        fila.enqueue(5);
        fila.enqueue(2);
        fila.enqueue(8);
        fila.enqueue(1);
        fila.enqueue(3);

        System.out.println("Fila original:");
        fila.display();

        fila.moveMenor();

        System.out.println("Fila após mover o menor elemento para o início:");
        fila.display();
    }
}
