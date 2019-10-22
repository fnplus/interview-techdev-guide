import java.util.*;
class Fibonacci {
    public static void main (String args[]) {  
        int count, firstValue = 0, secondValue = 1, nextValue;
        Scanner sc = new Scanner(System.in);
        
        // Input number of terms from user 
        System.out.println("Enter the number of terms:\n");
        count = sc.nextInt();
        System.out.println(firstValue);
        System.out.println(secondValue);
      
        for ( int i = 2 ; i < count ; i++ )
        {
            nextValue = firstValue + secondValue;
            firstValue = secondValue;
            secondValue = nextValue;
            System.out.println(nextValue);
        }
    }
}

