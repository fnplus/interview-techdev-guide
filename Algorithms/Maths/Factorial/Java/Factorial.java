public class Factorial {
  
  static int factorialIterative(int num) {
    if (num <= 1) return 1;

    int total = 1;

    for (int i = 1; i < num + 1; i++) {
      total *= i;
    }

    return total;
  }

  static int factorialRecursive(int num) {
    if (num <= 1) return 1;

    return num * factorialRecursive(num - 1);
  }

  public static void main(String[] args) {
    System.out.println(factorialIterative(5));
    System.out.println(factorialRecursive(5));
  }

}
