
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]=='('|| s[i]=='[')
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty() && stk.top()=='{')
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
            if(!stk.empty() && stk.top()=='(')
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
            if(!stk.empty() && stk.top()=='[')
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
    string s="{([)}";
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
//===============================================================PARANTHESESS(FOR STACK)=============================================================
#include <iostream>
using namespace std;
#include <stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[' )
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty() && stk.top()=='{')
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
            if(!stk.empty() && stk.top()=='(')
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
            if(!stk.empty() && stk.top()=='[')
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
int main()
{
    string s="{([])}";
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
//=================================FORWARD LIST====================================================
#include <iostream>
using namespace std;
#include <forward_list>
int main()
{
    forward_list<int>f;
    f.push_front(35);
    f.push_front(46);
    f.push_front(3);
    f.push_front(35);
    f.push_front(79);
    f.push_front(7);
    forward_list<int>f1;
    f.push_front(6);
    f.push_front(4);
    f.push_front(3);
    f.push_front(5);
    f.push_front(7);
    f.push_front(9);
    cout<<"\nlist of f:";
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nlist after sort f:";
    f.sort();
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nlist unique  f:";
    f.unique();
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nlist of reverse  f:";
    f.reverse ();
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    
    cout<<"\ndeletion data in list of f:";
    f.pop_front();
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nDistance of forward list\n";
    cout<<"Size="<<distance(f.begin(),f.end());
    cout<<"\nAfter merge\n";
    f.merge(f1);
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    
}
// Online C++ compiler to run C++ program online
//=================================DOUBLY LINKED LIST====================================================
#include <iostream>
using namespace std;
#include <list>
#include<algorithm>
int main()
{
    list<int>f;
    f.push_front(35);
    f.push_back(46);
    f.push_front(3);
    f.push_front(35);
    f.push_back(79);
    f.push_front(7);
   
    cout<<"\nlist of f:";
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\ndeletion data in list of f:";
    f.pop_front();
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nDynamic insert deletion or updation\n";
    cout<<"After inserting\n";
    auto it1=f.end();
    advance (it1,-2);
    f.insert(it1,30);
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter deletion\n";
    auto it2=f.end();
    advance (it2,-2);
    f.erase(it2);
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter updation\n";
    auto it3=f.begin();
    advance (it3,3);
    *it3=50;
    for(auto p:f)
    {
        cout<<p<<"\t";
    }
    cout<<"After searching\n";
    auto s=find(f.begin(),f.end(),90);
    if(s!=f.end())
    {
        cout<<" found="<<*s;
        
    }
    else
    {
        cout<<"not found";
    }
    
}
// Online C++ compiler to run C++ program online
//=================================MAP(STATIC)====================================================
#include <iostream>
using namespace std;
#include<map>

int main()
{
    map<int,string>m;
    m.insert({107,"pihu"});
    m.insert({103,"preet"});
    m.insert({105,"shivi"});
    for(auto p:m)
    {
        cout<<p.first<<":"<<p.second<<"\n";
    }
    for(auto p=m.begin(); p!=m.end(); p++)
    {
        cout<<p->first<<":"<<p->second<<"\n";
    }
    cout<<"Size="<<m.size();
}
// Online C++ compiler to run C++ program online
//=================================MAP(FREQUNCY)====================================================
#include <iostream>
using namespace std;
#include<map>
void freq(string s)
{
    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";
    }
}

int main()
{
    string s="acceptted";
    freq(s);
    
}
// Online C++ compiler to run C++ program online
//=================================MAP(FREQUNCY)====================================================
#include <iostream>
using namespace std;
#include<map>
void freq(string s)
{
    map<char,int>f;
    for(int i=0; i<s.size(); i++)
    {
        f[s[i]]++;
    }
    for(auto p:f)
    {
        cout<<p.first<<":"<<p.second<<"\n";
    }
}
int main()
{
    string s="wellcomee";
    freq(s);
}
// Online C++ compiler to run C++ program online
//=================================MAP(DYNAMIC MAP OREDERD MAP )====================================================
#include <iostream>
using namespace std;
#include<map>
int main()
{
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"how many records enter:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter rollno:";
        cin>>roll;
        cout<<"enter name:";
        cin>>name;
        mp.insert({roll,name});
    }
    cout<<"\nRecords are\n";
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";
    }
    cout<<"\nSearching record\n";
    cout<<"enter searching rollno:";
    cin>>roll;
    auto s=mp.find(roll);
    if(s!=mp.end())
    {
        cout<<s->first<<":"<<s->second<<"\n";
    }
    else
    {
        cout<<"not found";
    }
    cout<<"\nAfetr deletion\n";
    cout<<"enter delete roll no:";
    cin>>roll;
    auto d=mp.find(roll);
    if(d!=mp.end())
    {
        mp.erase(roll);
    }
    else
    {
        cout<<"not found";
    }
    cout<<"\n";
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";
    }
}
// Online C++ compiler to run C++ program online
//=================================MAP(DYNAMIC MAP UNOREDERD MAP)====================================================
#include <iostream>
using namespace std;
#include <unordered_map>
int main()
{
   unordered_map<int,string>mp;
   int roll,n;
   string name;
   cout<<"how many records enter:";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       cout<<"enter roll no:";
       cin>>roll;
       cout<<"enter name:";
       cin>>name;
       mp.insert({roll,name});
   }
   for(auto p:mp)
   {
       cout<<p.first<<":"<<p.second<<"\n";
   }
   cout<<"\nsearching\n";
   cout<<"enter searching roll:";
   cin>>roll;
   auto s=mp.find(roll);
   if(s!=mp.end())
   {
       cout<<s->first<<":"<<s->second<<"\n";
   }
   else
   {
       cout<<"not found";
   }
   cout<<"\nsearching for deletion\n";
   cout<<"enter searching roll:";
   cin>>roll;
   auto d=mp.find(roll);
   if(d!=mp.end())
   {
      mp.erase(roll);
   }
   else
   {
       cout<<"not found";
   }
   cout<<"\n";
   for(auto p:mp)
   {
       cout<<p.first<<":"<<p.second<<"\n";
   }
   
}
// Online C++ compiler to run C++ program online
//=================================ROMAN FROM UNOREDERD MAP====================================================
#include <iostream>
using namespace std;
#include <unordered_map>
int roman(string s)
{
    unordered_map<char,int>rm{{'I',1},{'V',5},{'X',10}};
    int r=0;
    for(int i=0; i<s.size(); i++)
    {
        if(rm[s[i]]<rm[s[i+1]])
        {
            r=r-rm[s[i]];
        }
        else
        {
             r=r+rm[s[i]];
        }
    }
    return r;
}
int main()
{
   string s="XI";
   cout<<roman(s);
      
}
// Online C++ compiler to run C++ program online
//=================================ROMAN FROM UNOREDERD MAP====================================================
#include <iostream>
using namespace std;
#include <unordered_map>
int roman(string s)
{
    unordered_map<char,int>up{{'I',1},{'V',5},{'X',10}};
    int r=0;
    for(int i=0; i<s.size(); i++)
    {
        if(up[s[i]]<up[s[i+1]])
        {
            r=r-up[s[i]];
        }
        else
        {
             r=r+up[s[i]];
        }
    }
    return r;
}

int main()
{
    string s="XII";
    cout<<roman(s);

       
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<unordered_map>
int roman(string s)
{
    unordered_map<char,int>rm{{'I',1},{'V',5},{'X',10}};
    int r=0;
    for(int i=0; i<s.size(); i++)
    {
        if(rm[s[i]]<rm[s[i+1]])
        {
            r=r-rm[s[i]];
        }
        else
        {
            r=r+rm[s[i]];
        }
    }
    return r;
}
int main() {
   string s="XI";
   cout<<roman(s);
}
// Online C++ compiler to run C++ program online
//=================================SELF REFERENCE TREE STRUCTURE================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    public:node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<<"\npre order\n";
    cout<<root->data<<"\n";
    cout<<root->left->data<<"\n";
    cout<<root->right->data<<"\n";
}
// Online C++ compiler to run C++ program online
//=================================SELF REFERENCE TREE STRUCTURE================================================================================
#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    public:node(int d)
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
        return;
        
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
        
    }
     
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
    {
        return;
        
    }
     
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<<"\npre order\n";
    preorder(root);
     cout<<"\nin order\n";
    inorder(root);
     cout<<"\npost order\n";
    postorder(root);
}
