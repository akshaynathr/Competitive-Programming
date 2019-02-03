from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def BFS(self,s):
        # s is the source
        q = []
        q.append(s)

        visited=[]
        visited.append(s)

        while q:
            s=q.pop(0)
            neighbours=self.graph[s]
            print(s)
            for i in neighbours:
                if  i not in visited:
                    q.append(i)
                    visited.append(i)



g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
g.BFS(2)


