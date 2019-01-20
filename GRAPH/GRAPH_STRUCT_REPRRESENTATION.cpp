#include <bits/stdc++.h>
using namespace std;


#define N 6

struct Edge {
    int src;
    int dest;


};

struct Node {
    int dest;
    struct Node * next;
};



struct Graph {
    struct Node * head[N];
};

struct Graph * createGraph(struct Edge edges[], int n)
{
    int i;
    // allocate memory for graph data structure
    struct Graph * graph = (struct Graph*) malloc(sizeof(struct Graph));

    // initialize the head pointer for all vertices
    for(int i=0;i<N;i++)
    {
        graph-> head[i] = NULL;

    }
    
    // n stands for no of edges
    
    for (int i=0;i<n;i++)
    {
        int src = edges[i].src;
        int dest = edges[i].dest;

        struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
        newNode -> dest= dest;

        newNode -> next = graph-> head[src];
        
        graph-> head[src] = newNode;
    }

    return graph;

}


void printGraph( struct  Graph * graph)
{
    for(int i=0;i<N;i++)
    {
        struct Node * nodeptr = graph->head[i];

        while(nodeptr!=NULL)
        {
            cout<<i<<"-->"<<nodeptr->dest <<endl;
            nodeptr = nodeptr->next;
            

        }
    }

}


int main()
{
    struct Edge edges[] = {
                            {0,1}, {1,2} , {2,0},{2,1} ,{3,2},{4,5}, {5,4} 
    };

    // number of edges
    int n = sizeof(edges)/sizeof(edges[0]);

    struct Graph * graph = createGraph(edges,n);
    
   printGraph(graph);
    return 0;

}
