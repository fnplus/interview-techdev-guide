/**
 Java Program to implement Priority Queue
 **/

import java.util.Scanner;

class PriorityQueue
{
    int number;
    int priority;

    /** Constructor **/
    public PriorityQueue(int n, int priority)
    {
        this.number = n;
        this.priority = priority;
    }
    /** toString() **/
    public String toString()
    {
        return "Number : "+ number +"\nPriority : "+ priority;
    }
}

/** Class PriorityQueue **/
class PriorityQueueMain
{
    private PriorityQueue[] heap;
    private int heapSize, capacity;

    /** Constructor **/
    public PriorityQueueMain(int capacity)
    {
        this.capacity = capacity + 1;
        heap = new PriorityQueue[this.capacity];
        heapSize = 0;
    }
    /** function to clear **/
    public void clear()
    {
        heap = new PriorityQueue[capacity];
        heapSize = 0;
    }
    /** function to check if empty **/
    public boolean isEmpty()
    {
        return heapSize == 0;
    }
    /** function to check if full **/
    public boolean isFull()
    {
        return heapSize == capacity - 1;
    }
    /** function to get Size **/
    public int size()
    {
        return heapSize;
    }
    /** function to insert the number in the PriorityQueue**/
    public void insert(int n, int priority)
    {
        PriorityQueue element = new PriorityQueue(n,priority);
        heap[++heapSize] = element;
        int pos = heapSize;
        while (pos != 1 && element.priority > heap[pos/2].priority)
        {
            heap[pos] = heap[pos/2];
            pos /=2;
        }
        heap[pos] = element;
    }
    /** function to remove an item **/
    public PriorityQueue remove()
    {
        int parent, child;
        PriorityQueue item, temp;
        if (isEmpty())
        {
            System.out.println("Heap is empty");
            return null;
        }

        item = heap[1];
        temp = heap[heapSize--];

        parent = 1;
        child = 2;
        while (child <= heapSize)
        {
            if (child < heapSize && heap[child].priority < heap[child + 1].priority)
                child++;
            if (temp.priority >= heap[child].priority)
                break;

            heap[parent] = heap[child];
            parent = child;
            child *= 2;
        }
        heap[parent] = temp;

        return item;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Priority Queue In Java\n");

        System.out.println("Enter size of priority queue ");
        PriorityQueueMain pq = new PriorityQueueMain(scan.nextInt());

        char ch;
        /*  Perform Priority Queue operations */
        do
        {
            System.out.println("\nPriority Queue Operations\n");
            System.out.println("1. insert");
            System.out.println("2. remove");
            System.out.println("3. check empty");
            System.out.println("4. check full");
            System.out.println("5. clear");
            System.out.println("6. size");
            System.out.println("7. display");

            int choice = scan.nextInt();
            switch (choice)
            {
            case 1 :
                System.out.println("Enter element and its priority");
                pq.insert(scan.nextInt(), scan.nextInt() );
                break;
            case 2 :
                System.out.println("\nElement removed \n\n"+ pq.remove());
                break;
            case 3 :
                System.out.println("\nEmpty Status : "+ pq.isEmpty() );
                break;
            case 4 :
                System.out.println("\nFull Status : "+ pq.isFull() );
                break;
            case 5 :
                System.out.println("\nPriority Queue Cleared");
                pq.clear();
                break;
            case 6 :
                System.out.println("\nSize = "+ pq.size() );
                break;
            default :
                System.out.println("Wrong Entry \n ");
                break;
            }

            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);
        } while (ch == 'Y'|| ch == 'y');
    }
}
