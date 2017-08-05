import java.util.Scanner;
public class ReducedString {
	public static void main(String arge[]){
		Scanner sc = new Scanner(System.in);
		StringBuffer str = new StringBuffer(sc.nextLine());
		for(int i = 1; i<str.length(); i++)
		{
			if(str.charAt(i-1) == str.charAt(i))
			{
				str.delete(i-1, i+1);
				i=0;
			}
		}
		if(str.length() == 0)
			System.out.println("Empty String");
		else
			System.out.println(str);
		sc.close();
	}
}
