import java.util.*;
public class Marcs_cakewalk {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n];
		for(int i = 0; i<n; i++)
			a[i] = sc.nextInt();
		Arrays.sort(a);
		int i = 0,k =0; 
				long sum=0;
		for(i = n-1; i>=0; i--){
			sum += Math.pow(2, k++)*a[i];
		}
		System.out.println(sum);
		sc.close();
	}

}
