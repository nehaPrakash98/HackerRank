import java.util.Scanner;
public class HackerrankInAString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char a[] = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int j = 0; j<n; j++)
		{
			String str = sc.next();
			char b[] = str.toCharArray();
			int k = 0;
			for(int i = 0; i<str.length(); i++)
			{
				if(b[i] == a[k]){
					k++;
					if(k == 10){
						System.out.println("YES");
						i=str.length();				
					}
				}
			}
				if(k!= 10){
					System.out.println("NO");
					//i=str.length();
			}
		}
		sc.close();
	}

}
