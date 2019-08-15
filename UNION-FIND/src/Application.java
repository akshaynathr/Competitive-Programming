import java.util.Scanner;

public class Application {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		QuickFindUF quf =new QuickFindUF(N);
		
		while(--N !=0) {
			int p =sc.nextInt();
			int q = sc.nextInt();
			if(!quf.connected(p, q)) {
				quf.union(p, q);
				System.out.print(p+" "+q);
			}
		}
		
		for(int i: quf.getId())
		{
			System.out.println(i);
		}
 	}

}
