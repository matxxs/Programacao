package lista11e12;

class Node {
    int data;
    Priority priority;
    Node next;

    public Node(int data, Priority priority) {
        this.data = data;
        this.priority = priority;
        this.next = null;
    }
}

enum Priority {
    ALTA,
    MEDIA,
    BAIXA
}

public class questao07 {

    private Node front;
    private Node rear;

    public questao07() {
        this.front = null;
        this.rear = null;
    }

    public boolean isEmpty() {
        return front == null;
    }

    public void enqueue(int data, Priority priority) {
        Node newNode = new Node(data, priority);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            
            if (newNode.priority.ordinal() < front.priority.ordinal()) {
                newNode.next = front;
                front = newNode;
            } else {
                
                Node current = front;
                while (current.next != null && current.next.priority.ordinal() <= newNode.priority.ordinal()) {
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
            System.out.print("(" + current.data + ", " + current.priority + ") ");
            current = current.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        questao07 fila = new questao07();
        fila.enqueue(5, Priority.BAIXA);
        fila.enqueue(2, Priority.MEDIA);
        fila.enqueue(8, Priority.ALTA);
        fila.enqueue(1, Priority.MEDIA);
        fila.enqueue(3, Priority.BAIXA);

        System.out.println("Fila com prioridades:");
        fila.display();
    }
}
