import java.util.Scanner;

public class Application {
	public static void main(String [] args)
	{
		Scanner sc = new Scanner (System.in);
		int N = sc.nextInt();
		UnionFind uf = new UnionFind(N);
		while(--N!=0)
		{
			int x1=sc.nextInt();
			int x2 = sc.nextInt();
			uf.union(x1, x2);
		}
	}

}
