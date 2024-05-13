package lista11e12;


class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }
}

public class questao02 {
    public static int[] maiorSequenciaZero(ListNode head) {
        int posicaoInicial = -1;
        int posicaoFim = -1;
        int maiorInicio = -1;
        int maiorFim = -1;
        int contador = 0;

        ListNode atual = head;

        while (atual != null) {
            if (atual.val == 0) {
                if (posicaoInicial == -1) {
                    posicaoInicial = contador;
                }
                posicaoFim = contador;
            } else {
                if (posicaoInicial != -1 && posicaoFim != -1) {
                    if (posicaoFim - posicaoInicial > maiorFim - maiorInicio) {
                        maiorInicio = posicaoInicial;
                        maiorFim = posicaoFim;
                    }
                    posicaoInicial = -1;
                    posicaoFim = -1;
                }
            }
            contador++;
            atual = atual.next;
        }

        if (posicaoInicial != -1 && posicaoFim != -1) {
            if (posicaoFim - posicaoInicial > maiorFim - maiorInicio) {
                maiorInicio = posicaoInicial;
                maiorFim = posicaoFim;
            }
        }

        return new int[]{maiorInicio, maiorFim};
    }

    public static void main(String[] args) {
      
        ListNode head = new ListNode(0);
        head.next = new ListNode(1);
        head.next.next = new ListNode(1);
        head.next.next.next = new ListNode(0);
        head.next.next.next.next = new ListNode(0);
        head.next.next.next.next.next = new ListNode(0);
        head.next.next.next.next.next.next = new ListNode(1);
        head.next.next.next.next.next.next.next = new ListNode(0);

        int[] posicoes = maiorSequenciaZero(head);
        int posicaoInicial = posicoes[0];
        int posicaoFim = posicoes[1];

        System.out.println("posicaoInicial = " + posicaoInicial + " e posicaoFim = " + posicaoFim);
    }
}
