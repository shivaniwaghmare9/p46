

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
    
};
node *create(node *root)
{
    int d;
    cout<<"enter value:";
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter value of left:"<<d<<"\n";
    root->left=create(root->left);
    cout<<"enter value of right:"<<d<<"\n";
    root->right=create(root->right);
    return root;
}
void preorder(node *n)
{
    if(n==NULL)
    {
        return ;
    }
    cout<<n->data<<"\t";
    preorder(n->left);
    preorder(n->right);
}
void inorder(node *n)
{
    if(n==NULL)
    {
        return ;
    }
   
    inorder(n->left);
    cout<<n->data<<"\t";
    inorder(n->right);
}
void postorder(node *n)
{
    if(n==NULL)
    {
        return ;
    }
    
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<"\t";
}
int main() {
    node *root=NULL;
    root=create(root);
    cout<<"\npreorder\n";
    preorder(root);
     cout<<"\ninorder\n";
    inorder(root);
     cout<<"\npostorder\n";
    postorder(root);
}