
// // // Online C++ compiler to run C++ program online
// // //=============================(SRC-NUMBER OF LEAF NODE)====================================================================================================
// // #include <iostream>
// // using namespace std;
// // class node{
// //     public:int data;
// //    class node *left;
// //     class node *right;
// //     node(int d)
// //     {
// //         data=d;
// //         left=NULL;
// //         right=NULL;
// //     }
    
// // };
// // void preorder(node *root,int &c)
// // {
// //     if(root==NULL)
// //     {
// //         return ;
// //     }
// //     preorder(root->left,c);
// //     preorder(root->right,c);
// //     if(root->left==NULL && root->right==NULL)
// //     {
// //         c++;
// //     }
// // }


// // int main() 
// // {
// //     int c=0;
// //     node *root=new node(10);
// //     root->left=new node(20);
// //     root->right=new node(30);
// //     root->left->left=new node(20);
// //     root->left->right=new node(30);
// //     root->left->right->left=new node(20);
// //     root->left->right->left->left=new node(30);
// //     preorder(root,c);
// //     cout<<"tolal leaf node="<<c;
// // }

// // Online C++ compiler to run C++ program online
// //=============================(SRC-NUMBER OF LEAF NODE)====================================================================================================
// #include <iostream>
// using namespace std;
// class node{
//     public:int data;
//    class node *left;
//     class node *right;
//     node(int d)
//     {
//         data=d;
//         left=NULL;
//         right=NULL;
//     }
    
// };
// void preorder(node *root,int &c)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     preorder(root->left,c);
//     preorder(root->right,c);
//     if(root->left==NULL && root->right==NULL)
//     {
//         c++;
//     }
// }


// int main() 
// {
//     int c=0;
//     node *root=new node(10);
//     root->left=new node(20);
//     root->right=new node(30);
//     root->left->left=new node(20);
//     root->left->right=new node(30);
//     root->left->right->left=new node(20);
//     root->left->right->left->left=new node(30);
//     preorder(root,c);
//     cout<<"tolal leaf node="<<c;
// }


// // Online C++ compiler to run C++ program online
// //=============================(SRC-NUMBER OF LEAF NODE)====================================================================================================
// #include <iostream>
// using namespace std;
// class node{
//     public:int data;
//    class node *left;
//     class node *right;
//     node(int d)
//     {
//         data=d;
//         left=NULL;
//         right=NULL;
//     }
    
// };
// void preorder(node *root,int &c)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     preorder(root->left,c);
//     preorder(root->right,c);
//     if(root->left==NULL && root->right==NULL)
//     {
//         c++;
//     }
// }


// int main() 
// {
//     int c=0;
//     node *root=new node(10);
//     root->left=new node(20);
//     root->right=new node(30);
//     root->left->left=new node(20);
//     root->left->right=new node(30);
//     root->left->right->left=new node(20);
//     root->left->right->left->left=new node(30);
//     preorder(root,c);
//     cout<<"tolal leaf node="<<c;
// }

// Online C++ compiler to run C++ program online
//=============================(SRC-NUMBER OF LEAF NODE)====================================================================================================
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
    
};
void preorder(node *root,int &c)
{
    if(root==NULL)
    {
        return ;
    }
    preorder(root->left,c);
    preorder(root->right,c);
    if(root->left==NULL && root->right==NULL)
    {
        c++;
    }
}


int main() 
{
    int c=0;
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(20);
    root->left->right=new node(30);
    root->left->right->left=new node(20);
    root->left->right->left->left=new node(30);
    preorder(root,c);
    cout<<"tolal leaf node="<<c;
}