package lista11e12;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class questao09 {

    private Node front;
    private Node rear;

    public questao09() {
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

    public static questao09 union(questao09 L1, questao09 L2) {
        questao09 L3 = new questao09();
        Node current = L1.front;

       
        while (current != null) {
            L3.enqueue(current.data);
            current = current.next;
        }

    
        current = L2.front;
        while (current != null) {
            if (!contains(L3, current.data)) {
                L3.enqueue(current.data);
            }
            current = current.next;
        }

        return L3;
    }

    private static boolean contains(questao09 fila, int data) {
        Node current = fila.front;
        while (current != null) {
            if (current.data == data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }

    public static void main(String[] args) {
        questao09 L1 = new questao09();
        L1.enqueue(1);
        L1.enqueue(2);
        L1.enqueue(3);

        questao09 L2 = new questao09();
        L2.enqueue(3);
        L2.enqueue(4);
        L2.enqueue(5);

        questao09 L3 = union(L1, L2);
        L3.display();
    }
}
