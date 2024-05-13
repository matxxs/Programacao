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

public class questao15 {

    private Node head;

    public questao15() {
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

    public static questao15 union(questao15 L1, questao15 L2) {
        questao15 L3 = new questao15();
        HashSet<Integer> set = new HashSet<>();

       
        Node current = L1.head;
        while (current != null) {
            if (!set.contains(current.data)) {
                L3.add(current.data);
                set.add(current.data);
            }
            current = current.next;
        }

        
        current = L2.head;
        while (current != null) {
            if (!set.contains(current.data)) {
                L3.add(current.data);
                set.add(current.data);
            }
            current = current.next;
        }

        return L3;
    }

    public static void main(String[] args) {
        questao15 L1 = new questao15();
        L1.add(1);
        L1.add(2);
        L1.add(3);

        questao15 L2 = new questao15();
        L2.add(2);
        L2.add(3);
        L2.add(4);

        questao15 L3 = union(L1, L2);

        System.out.println("União das listas L1 e L2:");
        L3.display();
    }
}
