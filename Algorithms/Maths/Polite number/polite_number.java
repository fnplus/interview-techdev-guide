// Java program to find politeness of a number 
  
public class Politeness { 
    // A function to count all odd prime factors 
    // of a given number n 
    static int countOddPrimeFactors(int n) 
    { 
        int result = 1; 
  
        // Eliminate all even prime factor of number of n 
        while (n % 2 == 0) 
            n /= 2; 
  
        // n must be odd at this point, so iterate 
        // for only odd numbers till sqrt(n) 
        for (int i = 3; i * i <= n; i += 2) { 
            int divCount = 0; 
  
            // if i divides n, then start counting of 
            // Odd divisors 
            while (n % i == 0) { 
                n /= i; 
                ++divCount; 
            } 
  
            result *= divCount + 1; 
        } 
        // If n odd prime still remains then count it 
        if (n > 2) 
            result *= 2; 
  
        return result; 
    } 
  
    static int politness(int n) 
    { 
        return countOddPrimeFactors(n) - 1;  
    } 
  
    public static void main(String[] args) 
    { 
        int n = 90; 
        System.out.println("Politness of " + n + " = "
                           + politness(n)); 
  
        n = 15; 
        System.out.println("Politness of " + n + " = "
                           + politness(n)); 
    } 
} 
