


public class SinglyLinkedList<T> {

    private int size;
    private Node<T> head;

    class Node<T> {
        private T data;
        private Node<T> nextNode;

        public Node(T data, Node<T> nextNode) {
            this.data = data;
            this.nextNode = nextNode;
        }

        public T getData() {
            return data;
        }

        public Node<T> getNextNode() {
            return nextNode;
        }

        public void setData(T data) {
            this.data = data;
        }

        public void setNextNode(Node<T> nextNode) {
            this.nextNode = nextNode;
        }
    }

    public boolean isEmpty() {
        return head == null;
    }

    public int getSize() {
        return size;
    }

    public void prepend(T data) {
        head = new Node<T>(data, head);
        size++;
    }

    public void append(T data) {
        if (head == null) {
            prepend(data);
            return;
        }
        Node<T> n = head;
        for (; n.getNextNode() != null ; n = n.getNextNode());
        n.setNextNode(new Node<T>(data, null));
        size++;
    }

    public T get(int index) {
        validateIndex(index);
        Node<T> n = head;
        int i = 0;
        for (; i < index; n = n.getNextNode(), i++);
        return n.getData();
    }

    public void set(int index, T data) {
        validateIndex(index);
        Node<T> n = head;
        int i = 0;
        for (; i < index; n = n.getNextNode(), i++);
        n.setData(data);
    }

    public int find(T data) {
        if (head == null) {
            return -1;
        }
        Node<T> n = head;
        for (int i = 0; n != null; n = n.getNextNode(), i++) {
            if (n.getData() != null && n.getData().equals(data)) {
                return i;
            }
        }
        return -1;
    }

    public void delete(int index) {
        validateIndex(index);
        Node<T> n = head;
        int i = 0;
        for (; i < index-1; n = n.getNextNode(), i++);
        n.setNextNode(n.getNextNode().getNextNode());
        size--;
    }

    public void add(int index, T data) {
        validateIndex(index);
        Node<T> n = head;
        int i = 0;
        for (; i < index-1; n = n.getNextNode(), i++);
        n.setNextNode(new Node<T>(data, n.getNextNode()));
        size++;
    }

    @Override
    public String toString(){
        if (isEmpty()) {
            return "size: 0\nhead -> null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("size: ");
        sb.append(size);
        sb.append("\nhead -> ");
        for (Node<T> n = head; n != null; n = n.getNextNode()) {
            sb.append(n.getData());
            sb.append(" -> ");
        }
        sb.append("null");
        return sb.toString();
    }

    private void validateIndex(int index) {
          if (index < 0 || index >= size) {
              throw new IndexOutOfBoundsException();
          }
    }

    public static void main(String []args) {
        SinglyLinkedList<Integer> list = new SinglyLinkedList<Integer>();
        System.out.println(list.toString());
        System.out.println("Operation: append(24)");
        list.append(24);
        System.out.println(list.toString());
        System.out.println("Operation: append(16)");
        list.append(16);
        System.out.println(list.toString());
        System.out.println("Operation: prepend(81)");
        list.prepend(81);
        System.out.println(list.toString());
        System.out.println("Operation: prepend(10)");
        list.prepend(10);
        System.out.println(list.toString());
        System.out.println("Operation: get(2)");
        System.out.println(list.get(2));
        System.out.println("Operation: add(2,75)");
        list.add(2,75);
        System.out.println(list.toString());
        System.out.println("Operation: set(2,53)");
        list.set(2,53);
        System.out.println(list.toString());
        System.out.println("Operation: find(99)");
        System.out.println(list.find(99));
        System.out.println("Operation: find(24)");
        System.out.println(list.find(24));
        System.out.println("Operation: list.delete(4)");
        list.delete(4);
        System.out.println(list.toString());
        System.out.println("Operation: list.delete(3)");
        list.delete(3);
        System.out.println(list.toString());
    }
}
