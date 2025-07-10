
// Online C++ compiler to run C++ program online
//=============================(SRC-DEFTH OF NODE)====================================================================================================
#include <iostream>
using namespace std;
class node{
    public:int data;
   class node *left;
    class node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
    int height(node *h)
    {
        if(h==NULL)
        {
            return 0;
        }
        int left=height(h->left);
        int right=height(h->right);
        int result=max(left,right)+1;
        return result;
    }
    
};
int main() 
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(20);
    root->left->right=new node(30);
    root->left->right->left=new node(20);
    root->left->right->left->left=new node(30);
    cout<<root->height(root);
}