import java.util.Scanner;

class MagicNumber
{
   public static void isMagicNumber(int n)
   {
       int sum = 0;
       while (n > 0 || sum > 9)
       {
           if (n == 0)
           {
               n = sum;
               sum = 0;
           }
           sum += n % 10;
           n /= 10;
       }

       if (sum == 1)
           System.out.println("Magic Number!");
       else
           System.out.println("Not a Magic Number!");
   }

   public static void main(String args[]) {

      Scanner read = new Scanner(System.in);
      System.out.print("Enter a number: ");
      int n = read.nextInt();
      isMagicNumber(n);
  }
}
