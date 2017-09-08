import java.util.*;
public class LuckBalance {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int arr[][] = new int[n][2];
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		int count = 0; 
		int sum = 0;
		for(int i = 0; i<n; i++)
		{
			arr[i][0] = sc.nextInt();
			arr[i][1] = sc.nextInt();
			if(arr[i][1] == 1)
			{
				count++;
				list.add(arr[i][0]);
			}
			else{
				sum = sum + arr[i][0];
			}
		}
		Collections.sort(list);
		for(int i=0; i<list.size(); i++)
		{
			if(i<=count-k-1)
			{
				sum = sum-list.get(i);
			}
			else
			{
				sum = sum + list.get(i);
			}
		}
		System.out.println(sum);
		sc.close();
	}
}
