public class PerfectNumber {

    static boolean isPerfect(int n) {
        // the smallest perfect number is 6 [1]
        // [1] https://oeis.org/A000396
        if (n < 6) {
            return false;
        }

        // this is just an optimization, since it's proved [2] that any possible
        // odd perfect number must be greater than 10^1500, which is greater
        // than the int size
        // [2] http://www.lirmm.fr/~ochem/opn/opn.pdf
        if (n % 2 != 0) {
            return false;
        }

        // the algorithm itself
        int sqrtOfN = (int) Math.sqrt(n);
        int aliquotSum = 1;
        for (int i = 2; i <= sqrtOfN; i++) {
            if (n % i == 0) {
                aliquotSum += i + n/i;
            }
        }

        return aliquotSum == n;
    }

    public static void main(String[] args) {
        int[] testCases = {-6, 0, 6, 7, 25, 28, 496, 8128, 33550336};

        for (int i : testCases) {
            System.out.println(String.format("Is %d a perfect number? %s", i, isPerfect(i)));
        }
    }
}
