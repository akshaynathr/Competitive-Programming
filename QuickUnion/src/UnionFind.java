
public class UnionFind {
	
	private int [] id;
	
	public int[] getId() {
		return id;
	}

	public void setId(int N) {
		for(int i=0;i<N;i++)
		{
			id[i]=i;
		}
	}

	public UnionFind(int N)
	{
		id = new int[N];
		setId(N);
		
	}
	
	private int findroot(int x1)
	{
		while (id[x1]!=x1)
		{
			x1=id[x1];
		}
		return x1;
	}
	
	public boolean connected(int x1, int x2)
	{
		return findroot(x1)==findroot(x2);
	}
	
	public void union(int x1,int x2)
	{
		if(!connected(x1,x2))
			{
			 int r1 = findroot(x1);
			 int r2 = findroot(x2);
			 id[r1]=r2;
			}
		
		
	}

}
