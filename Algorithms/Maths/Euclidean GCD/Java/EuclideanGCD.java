public class EuclideanGCD {

    static int euclideanGCD(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }

        return a;
    }

    public static void main(String[] args) {
        System.out.println("GCD(1071, 462) = " + euclideanGCD(1071, 462));
        System.out.println("GCD(462, 1071) = " + euclideanGCD(462, 1071));
        System.out.println("GCD(60, 12) = " + euclideanGCD(60, 12));
        System.out.println("GCD(12, 60) = " + euclideanGCD(12, 60));
        System.out.println("GCD(50, 3) = " + euclideanGCD(527, 23));
        System.out.println("GCD(3, 50) = " + euclideanGCD(23, 527));
        System.out.println("GCD(100, 0) = " + euclideanGCD(100, 0));
        System.out.println("GCD(0, 100) = " + euclideanGCD(0, 100));
        System.out.println("GCD(8, 1) = " + euclideanGCD(8, 1));
        System.out.println("GCD(1, 8) = " + euclideanGCD(1, 8));
        System.out.println("GCD(1, 1) = " + euclideanGCD(1, 1));
        System.out.println("GCD(0, 0) = " + euclideanGCD(0, 0));
    }
}
