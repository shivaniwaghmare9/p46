
// Online C++ compiler to run C++ program online
//==============================================PARANTHESESS=======================================================================
#include <iostream>
using namespace std;
#include <stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty()&& stk.top()=='{')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else if(s[i]==')')
        {
            if(!stk.empty()&& stk.top()=='(')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!stk.empty()&& stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
    }
    if(!stk.empty())
    {
       return false;
    }
    else
    {
        return r;
    }
    
}
int main() {
    string s="{[()]}";
    if(pvalid(s))
    {
        cout<<"valid";
    }
    else
    {
        cout<<"invalid";
    }
}

// Online C++ compiler to run C++ program online
//=====================================SELF REFRENCIAL CLASS STRUCTURE=================================================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    node *root=new node(20);
    root->left=new node(30);
    root->right=new node(40);
    
    cout<<"\npreorder\n";
    cout<<root->data<<"\n";
    cout<<root->left->data<<"\n";
    cout<<root->right->data<<"\n";
    
     cout<<"\ninorder\n";
     cout<<root->left->data<<"\n";
     cout<<root->data<<"\n";
    cout<<root->right->data<<"\n";
    
    cout<<"\npostorder\n";
     cout<<root->left->data<<"\n";
     cout<<root->right->data<<"\n";
     cout<<root->data<<"\n";
}

// Online C++ compiler to run C++ program online
//=====================================SELF REFRENCIAL CLASS STRUCTURE(WITH FUNCTION)=================================================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {    
        data=d;
        left=NULL;
        right=NULL;
    }
};
void preorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
    
}
void inorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
    
}
void postorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
   
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
    
}

int main()
{
    node *root=new node(20);
    root->left=new node(30);
    root->right=new node(40);
    
    cout<<"\npreorder\n";
    preorder(root);
    
     cout<<"\ninorder\n";
     inorder(root);
     
    cout<<"\npostorder\n";
    postorder(root);
}

// Online C++ compiler to run C++ program online
//=====================================SELF REFRENCIAL CLASS STRUCTURE(binary search tree)=================================================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {    
        data=d;
        left=NULL;
        right=NULL;
    }
};

node *create(node *root,int v)
{
    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->left=create(root->left,v);
    }
    else
    {
         root->right=create(root->right,v);
    }
    return root;
}
void inorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
    
}



int main()
{
    node *root=NULL;
    int n,val;
    cout<<"How many nodes enter:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter node:";
        cin>>val;
        root=create(root,val);
    }
    
    
     cout<<"\ninorder\n";
     inorder(root);
     
    
}
// Online C++ compiler to run C++ program online
//=====================================SELF REFRENCIAL CLASS STRUCTURE(  dynamic entry)=================================================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {    
        data=d;
        left=NULL;
        right=NULL;
    }
};

node *create(node *root)
{
    int d;
    cout<<"enter nodes:";
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
       return NULL; 
    }
    cout<<"enter left node"<<d<<"\n";
    root->left=create(root->left);
    cout<<"enter right node"<<d<<"\n";
    root->right=create(root->right);
    return root;
}
void preorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
    
}
void inorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
    
}
void postorder(node *root)
{
    if(root==NULL)
    {
     return ;   
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
    
}



int main()
{
    node *root=NULL;
    root=create(root);
    cout<<"\ninorder\n";
     preorder(root);
     
     cout<<"\ninorder\n";
     inorder(root);
     
     cout<<"\ninorder\n";
     postorder(root);
     
    
}