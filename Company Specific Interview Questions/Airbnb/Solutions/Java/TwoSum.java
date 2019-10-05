import java.util.*;
// this is two sum for airbnb
public class TwoSum {
    public static void main(String[] args){
	    Scanner cin=new Scanner(System.in);
	    int n=cin.nextInt();
	    int[] nms=new int[n];
	    for(int i=0;i<n;i++){
		    nms[i]=cin.nextInt();
	    }
	    int target=cin.nextInt();
	    int[] arr=twoSum(nms,target);
	    System.out.println(arr[0]+" "+arr[1]);
    }
    public static int[] twoSum(int[] nms, int target) {
        int sum = 0;
        int[] arr = new int[2];
        for (int i = 0; i < nms.length; i++) {
            for (int j = i + 1; j < nms.length; j++) {
                sum = nms[i] + nms[j];
                if (sum == target) {
                    arr[0] = i;
                    arr[1] = j;
                }
                sum = 0;

            }
        }
        return arr;
    }
}

