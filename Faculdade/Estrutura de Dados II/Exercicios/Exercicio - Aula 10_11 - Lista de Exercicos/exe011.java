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

public class questao11 {

    private Node head;

    public questao11() {
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

    public questao11 removeDuplicates() {
        questao11 uniqueList = new questao11();
        HashSet<Integer> set = new HashSet<>();

        Node current = head;
        while (current != null) {
            if (!set.contains(current.data)) {
                uniqueList.add(current.data);
                set.add(current.data);
            }
            current = current.next;
        }

        return uniqueList;
    }

    public static void main(String[] args) {
        questao11 lista = new questao11();
        lista.add(1);
        lista.add(2);
        lista.add(3);
        lista.add(2);
        lista.add(4);
        lista.add(1);

        System.out.println("Lista original:");
        lista.display();

        questao11 uniqueList = lista.removeDuplicates();

        System.out.println("Lista sem repetições:");
        uniqueList.display();
    }
}
