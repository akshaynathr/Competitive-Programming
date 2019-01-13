#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node* left, *right;

    Node(int data)
    {
        this -> data = data;
        left=right=NULL;
    }
};

void printPreorder(struct Node* node)
{
    if(node==NULL)
    {

        return;
    }

    cout<< node-> data<<" ";

    printPreorder(node->left);

    printPreorder(node->right);
}

void printInorder(struct Node* node)
{
    if(node == NULL)
    {
        return;
    }
    printInorder(node->left);

    cout<< node -> data << " ";

    printInorder(node->right);

}

void printPostOrder(struct Node * node)
{
    if(node == NULL)
        return ;

    printPostOrder(node->left);
    printPostOrder(node->right);

    cout<<node -> data<<" ";
}



int main()
{
    struct Node *root = new Node(1);
    root-> left = new Node(2);
    root -> right = new Node (3);
    root ->left -> left = new Node(4);
    root -> left -> right = new Node(5);

    cout<<"\n Preorder traversal\n";
    printPreorder(root);

    cout<<"\n Inorder traversal\n";
    printInorder(root);

    cout<<"\n Postorder traversal\n";
    printPostOrder(root);




    return 0;
}
