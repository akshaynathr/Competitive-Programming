class Node:
    def __init__(self,data):
        self.data =data
        self.left = None
        self.right = None




def printPreorder(root):
    if root:
        print(root.data)
        printPreorder(root.left)
        printPreorder(root.right)

def printPostorder(root):
    if root:
        printPostorder(root.left)
        printPostorder(root.right)
        print(root.data)


def printInorder(root):
    if root:
        printInorder(root.left)
        print(root.data)
        printInorder(root.right)





if __name__ =='__main__':
    root = Node(1)
    root.left = Node(2)
    root.right=Node(3)
    root.left.left= Node(4)
    root.left.right = Node(5)

    print("Preorder")
    printPreorder(root)

    print("Postorder")
    printPostorder(root)

    print("Inorder")
    printInorder(root)
