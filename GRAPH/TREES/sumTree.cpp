// Given a binary tree find the sum of all the elements 

#include <bits/stdc++.h>
using namespace std;


struct Node  {
    int data;
    struct Node* right ;
    struct Node* left ;

    Node(int data)
    {
        this ->data = data;
        right=left=NULL;
        

    }
};

int addTree(struct Node * node)
{
    if(node== NULL)
        return 0;
    else
        return ( node -> data +addTree(node->left) + addTree(node->right));

}


int main()
{
   struct Node *root= new Node(1);
   root->left = new Node(2);
   root -> right = new Node(3);
   root -> left -> left = new Node(4);
   root -> left -> right = new Node(5);

    cout<<"Sum of elements:"<<endl;
    int sum ;
    sum = addTree(root);
    cout<<sum;



    return 0;
}
