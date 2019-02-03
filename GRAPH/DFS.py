from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph= defaultdict(list)

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def DFS(self,s):
        visited = [False] * len(self.graph)

        visited[s]=True

        stack = []
        print("Pushing "+str(s)+"to stack")
        stack.insert(0,s)
        while stack:
            s = stack.pop(0)
            for i in self.graph[s]:
                if visited[i]==False:
                    visited[i]=True
                    stack.insert(0,i)
                    print("Pushing "+str(i)+"to stack")

                    print(i)
                    print(stack)
        print(self.graph)


g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 3)
g.addEdge(2, 0)
g.addEdge(3, 3)

print "Following is DFS from (starting from vertex 2)"
g.DFS(2)
