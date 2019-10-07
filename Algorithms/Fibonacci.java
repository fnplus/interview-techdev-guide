import java.util.*;

public class Fibonacci {
    
public static void main()
{
    
     int n;
     Scanner sin =  new Scanner(System.in);
     System.out.println("Enter the number of terms of Fibonacci series to be printed");
     n = sin.nextInt();
     print_fibonacci(n)


     
}
void print_fibonacci(int num)
{
    int a = 0 , b = 1;
    System.out.println(a + "\n " + b );
    num = num - 2;
    while(num > 0)
    {
        num = num - 1;
        sum = a + b;
        a = b;
        b = sum;
        System.out.println("\n "+ sum);

    }
}

}