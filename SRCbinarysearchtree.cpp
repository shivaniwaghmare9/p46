
// // Online C++ compiler to run C++ program online
// //=============================(SRC-BINARY SEARCH TREE)====================================================================================================
// #include <iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         data=d;
//         left=NULL;
//         right=NULL;
//     }
    
// };
// node *create(node *root,int v)
// {
    
//     if(root==NULL)
//     {
//         return new node(v);
//     }
//     if(v<root->data)
//     {
//         root->left=create(root->left,v);
//     }
//     else
//     {
//         root->right=create(root->right,v);
//     }
//     return root;
// }
// void inorder(node *root)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//      inorder(root->left);
//     cout<<root->data<<"\t";
//      inorder(root->right);
   
// }
// int main() 
// {
//     node *root=NULL;
//     int n ,val;
//     cout<<"how many nodes:";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"enter value:";
//         cin>>val;
//         root=create(root,val);
//     }
//     cout<<"inorder data\n";
//     inorder(root);
    
// }

// // Online C++ compiler to run C++ program online
// //=============================(SRC-BINARY SEARCH TREE)====================================================================================================
// #include <iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         data=d;
//         left=NULL;
//         right=NULL;
//     }
    
// };
// node *create(node *root,int v)
// {
    
//     if(root==NULL)
//     {
//         return new node(v);
//     }
//     if(v<root->data)
//     {
//         root->left=create(root->left,v);
//     }
//     else
//     {
//         root->right=create(root->right,v);
//     }
//     return root;
// }
// void inorder(node *root)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//      inorder(root->left);
//     cout<<root->data<<"\t";
//      inorder(root->right);
   
// }
// int main() 
// {
//     node *root=NULL;
//     int n ,val;
//     cout<<"how many nodes:";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"enter value:";
//         cin>>val;
//         root=create(root,val);
//     }
//     cout<<"inorder data\n";
//     inorder(root);
    
// }
