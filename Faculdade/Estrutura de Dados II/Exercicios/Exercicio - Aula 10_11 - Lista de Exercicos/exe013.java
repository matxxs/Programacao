package lista11e12;

import java.util.HashSet;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class questao13 {

    private Node head;

    public questao13() {
        this.head = null;
    }

    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
        }
    }

    public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    public static questao13 intersecao(questao13 L1, questao13 L2) {
        questao13 L3 = new questao13();
        HashSet<Integer> set = new HashSet<>();

        Node current = L1.head;
        while (current != null) {
            if (L2.contains(current.data) && !set.contains(current.data)) {
                L3.add(current.data);
                set.add(current.data);
            }
            current = current.next;
        }

        return L3;
    }

    private boolean contains(int data) {
        Node current = head;
        while (current != null) {
            if (current.data == data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }

    public static void main(String[] args) {
        questao13 L1 = new questao13();
        L1.add(1);
        L1.add(2);
        L1.add(3);

        questao13 L2 = new questao13();
        L2.add(2);
        L2.add(3);
        L2.add(4);

        questao13 L3 = intersecao(L1, L2);

        System.out.println("Interseção das listas L1 e L2:");
        L3.display();
    }
}
