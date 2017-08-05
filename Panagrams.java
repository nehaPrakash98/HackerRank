import java.util.Scanner;
public class Panagrams {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		s = s.toLowerCase();
		String a = "abcdefghijklmnopqrstuvwxyz";
		char b[] = a.toCharArray(); 
		boolean isPangram = true;
		for(int i=0; i<a.length(); i++)
		{
			if(s.contains(String.valueOf(b[i]))==false)
			{
				isPangram = false;
				break;
			}
		}
		if(isPangram)
			System.out.println("pangram");
		else
			System.out.println("not pangram");
		
		sc.close();
	}
}
