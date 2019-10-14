import java.util.*;

public class bubbleSort
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int a[] = new int[n];

		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();

		//sorting

		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++)
			{
				if(a[i] > a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}

		for(int i=0;i<n;i++)
			System.out.print(" " + a[i]);
	}
}