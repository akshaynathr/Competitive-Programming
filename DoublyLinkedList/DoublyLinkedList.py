class Node:
    def __init__(self,data,prevNode=None,nextNode=None):
        self.data = data
        self.prevNode = prevNode
        self.nextNode =  nextNode

    def __str__(self):
        return str(self.data)

    def getNextNode (self):
        return self.nextNode

    def getPrevNode(self):
        return self.prevNode

    def setNextNode(self,nextNode):
        self.nextNode  = nextNode

    def setPrevNode(self,prevNode):
        self.prevNode = prevNode




class DDList:
    def __init__(self):
        self.size  = 0
        self.head=None
        self.tail = None



    def appendNode(self,data):
        newNode = Node(data)
        if self.size == 0:
            self.head = newNode
            self.tail = newNode
            self.size = self.size +1

        else:
            trav=temp = self.head
            while temp.getNextNode():
                temp =temp.getNextNode()
            temp.setNextNode(newNode)
            newNode.setPrevNode(temp)
            self.size = self.size +1

    def printNode(self):
        trav = self.head
        while trav != None:
            print(trav.data)
            trav = trav.getNextNode()



d=DDList()
d.appendNode(30)
d.appendNode(10)
d.appendNode(50)
d.appendNode(10)
d.appendNode(30)
d.printNode()



