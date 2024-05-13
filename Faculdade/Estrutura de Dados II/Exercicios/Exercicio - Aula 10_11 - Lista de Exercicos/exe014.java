package lista11e12;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class questao14
 {

    private Node head;

    public questao14() {
        this.head = null;
    }

    public void insertSorted(int data) {
        Node newNode = new Node(data);
        
        if (head == null || data < head.data) {
            newNode.next = head;
            head = newNode;
            return;
        }
        
        Node current = head;
        while (current.next != null && current.next.data < data) {
            current = current.next;
        }
        
        newNode.next = current.next;
        current.next = newNode;
    }

    public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        questao14 lista = new questao14();
        lista.insertSorted(3);
        lista.insertSorted(1);
        lista.insertSorted(5);
        lista.insertSorted(2);

        System.out.println("Lista ordenada:");
        lista.display();
    }
}

