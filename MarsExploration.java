import java.util.Scanner;
public class MarsExploration {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int n = s.length();
		StringBuilder b = new StringBuilder();
		String str = new String("SOS");
		for(int i=0; i<(n/3); i++)
		{
			b.append(str);
	    }
		str = b.toString();
		//System.out.println(str);
		char[] a = str.toCharArray();
		char[] c = s.toCharArray();
		int i, count = 0;
		for(i=0; i<n; i++)
		{
			if(a[i] != c[i])
				count++;
		}
		System.out.println(count);
		sc.close();
	}
}
