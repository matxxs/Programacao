package lista11e12;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class ElementoNaoEncontradoException extends Exception {
    public ElementoNaoEncontradoException(String message) {
        super(message);
    }
}

public class questao12 {

    private Node head;

    public questao12() {
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

    public boolean searchAndRemove(int key) throws ElementoNaoEncontradoException {
        if (head == null) {
            throw new ElementoNaoEncontradoException("Lista vazia");
        }

        if (head.data == key) {
            head = head.next;
            return true;
        }

        Node prev = null;
        Node current = head;

        while (current != null && current.data != key) {
            prev = current;
            current = current.next;
        }

        if (current == null) {
            throw new ElementoNaoEncontradoException("Elemento não encontrado");
        }

        prev.next = current.next;
        return true;
    }

    public static void main(String[] args) {
        questao12 lista = new questao12();
        lista.add(1);
        lista.add(2);
        lista.add(3);
        lista.add(4);

        System.out.println("Lista original:");
        lista.display();

        try {
            lista.searchAndRemove(3);
            System.out.println("Lista após remover o elemento 3:");
            lista.display();
        } catch (ElementoNaoEncontradoException e) {
            System.out.println(e.getMessage());
        }

        try {
            lista.searchAndRemove(5);
            System.out.println("Lista após tentar remover o elemento 5:");
            lista.display();
        } catch (ElementoNaoEncontradoException e) {
            System.out.println(e.getMessage());
        }
    }
}

