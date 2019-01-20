// find the path between given vertices in a directed graph
//
//

#include <bits/stdc++.h>
using namespace std;

struct Edge 
{
    int src;
    int dest;
};

class Graph
{
    public :
        vector <vector<int> > adjList;

        // Graph constructor

        Graph(const vector<Edge> & edges, int N)
        {
            
            adjList.resize(N);

            for(auto &edge : edges)
            {
                adjList[edge.src].push_back(edge.dest);

            }
        }

};

bool isConnected(Graph &graph, int src,int dest, vector<bool> &discovered)
{
   queue<int> q;

   discovered[src]=true;
   q.push(src);

   while(!q.empty())
   {
        int v=  q.front();
        q.pop();

        if(v==dest)
        {
            return true;
        }
        for(int u:graph.adjList[v])
        {
            if(!discovered[u])
            {
                discovered[u]=true;
                q.push(u);

            }


        }





   }
   return false;

}


int main()
{
    vector<Edge> edges = {
        {0,3},{1,0},{1,2},{1,4},{3,4},
        {3,5},{4,3},{4,6},{5,6},{6,7} 

    };

    int N=8;

    Graph graph(edges,N);
    
    vector<bool> discovered(N);

    int src=2;
    int dest = 7;

    if(isConnected(graph, src,dest,discovered))
            {
                cout<<"Path exists from "<< src <<"to "<< dest<<endl;
            }
    return 0;

}
