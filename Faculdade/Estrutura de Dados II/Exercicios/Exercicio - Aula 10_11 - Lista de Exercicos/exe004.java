package lista11e12;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class questao04 {
    private Node top;

    public questao04() {
        this.top = null;
    }

    public boolean isEmpty() {
        return top == null;
    }

    public void push(int data) {
        Node newNode = new Node(data);
        newNode.next = top;
        top = newNode;
    }

    public int pop() {
        if (isEmpty()) {
            throw new IllegalStateException("A pilha está vazia");
        }
        int data = top.data;
        top = top.next;
        return data;
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("A pilha está vazia");
            return;
        }
        Node current = top;
        System.out.print("Pilha: ");
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    public void removeByKey(int key) {
        questao04 tempStack = new questao04();

        while (!isEmpty()) {
            int data = pop();
            if (data != key) {
                tempStack.push(data);
            } else {
                break;
            }
        }

    
        while (!tempStack.isEmpty()) {
            push(tempStack.pop());
        }
    }

    public static void main(String[] args) {
        questao04 stack = new questao04();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        stack.display();

       
        stack.removeByKey(3);

        stack.display();
    }
}
