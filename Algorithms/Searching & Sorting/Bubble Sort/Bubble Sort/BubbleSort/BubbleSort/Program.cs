using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BubbleSort
{ 
 class Program
{
    static void Main(string[] args)
    {
        int no;
        Console.Write("Enter the number of items for the array ");
        no = int.Parse(Console.ReadLine());
        int[] arr = new int[no];

        Random rnd = new Random();

        for (int x = 0; x < no; x++)
        {
            arr[x] = rnd.Next(0, 1000);
        }

        for (int y = 0; y < no; y++)
        {
            Console.Write(arr[y] + " ");
        }
        Console.WriteLine("\n");

        DateTime time1 = DateTime.Now;

        Program pr = new Program();
        pr.BubbleSort(arr, no);

        DateTime time2 = DateTime.Now;

        string time = time2.Subtract(time1).Milliseconds.ToString();
        Console.WriteLine("\n");
        Console.WriteLine("The total time spent to sort the array is " + time + " ms");
        Console.ReadLine();

    }


    void BubbleSort(int[] arr, int no)
    {
        for (int x = 0; x < no; x++)
        {
            bool swap = false;

            for (int y = 0; y < no - 1; y++)
            {
                if (arr[y] > arr[y + 1])
                {
                    int temp = arr[y];
                    arr[y] = arr[y + 1];
                    arr[y + 1] = temp;
                    swap = true;
                }
            }

            if (swap == false)
                break;

        }

        Console.WriteLine("The sorted array:- ");

        for (int z = 0; z < no; z++)
        {
            Console.Write(arr[z] + " ");
        }

    }

}
}
