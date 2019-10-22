import java.util.Scanner;

 

/** Class Heap */

class Heap

{

 

    private int[] heapArray;

    /** size of array **/

    private int maxSize; 

    /** number of nodes in array **/

    private int heapSize; 

 

    /** Constructor **/

    public Heap(int mx) 

    {

        maxSize = mx;

        heapSize = 0;

        heapArray = new int[maxSize]; 

    }

    /** Check if heap is empty **/

    public boolean isEmpty() 

    {

        return heapSize == 0;

    }

    /** Function to insert element **/

    public boolean insert(int ele) 

    {

        if (heapSize + 1 == maxSize)

            return false;

        heapArray[++heapSize] = ele;

        int pos = heapSize;

        while (pos != 1 && ele > heapArray[pos/2])

        {

            heapArray[pos] = heapArray[pos/2];

            pos /=2;

        }

        heapArray[pos] = ele;    

        return true;

    } 

 

    /** function to remove element **/

    public int remove()

    {

        int parent, child;

        int item, temp;

        if (isEmpty() )

            throw new RuntimeException("Error : Heap empty!");

 

        item = heapArray[1];

        temp = heapArray[heapSize--];

 

        parent = 1;

        child = 2;

        while (child <= heapSize)

        {

            if (child < heapSize && heapArray[child] < heapArray[child + 1])

                child++;

            if (temp >= heapArray[child])

                break;

 

            heapArray[parent] = heapArray[child];

            parent = child;

            child *= 2;

        }

        heapArray[parent] = temp;

 

        return item;

    }

 

    /** Function to print values **/

    public void displayHeap()

    {

        /* Array format */

        System.out.print("\nHeap array: ");    

        for(int i = 1; i <= heapSize; i++)

            System.out.print(heapArray[i] +" ");

        System.out.println("\n");

    }  

}

 

/** Class HeapTest **/

public class HeapTest

{

    public static void main(String[] args)

    {

        Scanner scan = new Scanner(System.in);

        System.out.println("Heap Test\n\n");

        System.out.println("Enter size of heap");

        Heap h = new Heap(scan.nextInt() );

 

        char ch;

        /**  Perform Heap operations  **/

        do    

        {

            System.out.println("\nHeap Operations\n");

            System.out.println("1. insert ");

            System.out.println("2. delete item with max key ");

            System.out.println("3. check empty");

 

            boolean chk;       

            int choice = scan.nextInt();            

            switch (choice)

            {

            case 1 : 

                System.out.println("Enter integer element to insert");

                chk = h.insert( scan.nextInt() ); 

                if (chk)

                    System.out.println("Insertion successful\n");

                else

                    System.out.println("Insertion failed\n");                    

                break;                          

            case 2 : 

                System.out.println("Enter integer element to delete");

                if (!h.isEmpty())

                    h.remove();

                else

                    System.out.println("Error. Heap is empty\n");   

                break;                         

            case 3 : 

                System.out.println("Empty status = "+ h.isEmpty());

                break;         

            default : 

                System.out.println("Wrong Entry \n ");

                break;       

            }

 

            /** Display heap **/

            h.displayHeap();  

 

            System.out.println("\nDo you want to continue (Type y or n) \n");

            ch = scan.next().charAt(0);                        

        } while (ch == 'Y'|| ch == 'y');  

    }

}