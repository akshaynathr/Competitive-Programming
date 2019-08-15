
public class QuickFindUF {
	private int[] id;
	
	public int[] getId()
	{
		return id;
	}
	
	public void setId(int N)
	{
		for(int i=0;i<N;i++)
		{
			id[i]=i;
		}
	}
	public QuickFindUF(int N)
	{
		// populate the id array with id number
		id = new int[N];
		setId(N);
		
	}
	
	public boolean connected(int p,int q)
	{
		return id[p]==id[q];
		
	}
	
	public void union(int p,int q)
	{
		int pid=id[p];
		int qid=id[q];
		
		for(int i=0;i<id.length;i++)
		{
			if(id[i]==pid) id[i]=qid;
		}
	}
}
