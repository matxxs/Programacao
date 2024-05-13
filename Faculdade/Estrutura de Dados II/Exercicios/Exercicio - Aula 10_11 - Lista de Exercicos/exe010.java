package lista11e12;

class Node {
    char data;
    Node next;

    public Node(char data) {
        this.data = data;
        this.next = null;
    }
}

public class questao10 {

    private Node head;

    public questao10() {
        this.head = null;
    }

    public void add(char data) {
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

    public void rearrange() {
        Node letterHead = null; 
        Node digitHead = null; 

       
        Node current = head;
        while (current != null) {
            if (Character.isLetter(current.data)) {
                if (letterHead == null) {
                    letterHead = new Node(current.data);
                } else {
                    Node temp = new Node(current.data);
                    temp.next = letterHead;
                    letterHead = temp;
                }
            } else if (Character.isDigit(current.data)) {
                if (digitHead == null) {
                    digitHead = new Node(current.data);
                } else {
                    Node temp = new Node(current.data);
                    temp.next = digitHead;
                    digitHead = temp;
                }
            }
            current = current.next;
        }

    
        current = digitHead;
        while (current != null) {
            add(current.data);
            current = current.next;
        }

       
        current = letterHead;
        while (current != null) {
            add(current.data);
            current = current.next;
        }
    }

    public static void main(String[] args) {
        questao10 lista = new questao10();
        lista.add('A');
        lista.add('1');
        lista.add('E');
        lista.add('5');
        lista.add('T');
        lista.add('7');
        lista.add('W');
        lista.add('8');
        lista.add('G');

        System.out.println("Lista original:");
        lista.display();

        lista.rearrange();

        System.out.println("Lista rearranjada:");
        lista.display();
    }
}
