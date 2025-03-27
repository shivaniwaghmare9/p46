

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
// Online C++ compiler to run C++ program online
//============================namespace ke andar namespace =============================================================
#include <iostream>
using namespace std;
namespace cybrom
{
    void student()
    {
        cout<<"cybrom student\n";
    }
    namespace bhopal
    {
        void student()
        {
            cout<<"bhopal student\n";
        }
    }
    void show()
    {
        cout<<"first program\n";
    }
    class iostreamnew
    {
        public:void show()
        {
            cout<<"class example\n";
        }
    }
    coutnew;
    
}



using namespace cybrom;
int main()
{
    bhopal::student();
    student();
    show();
    coutnew.show();
    iostreamnew obj;
    obj.show();
    
}

// Online C++ compiler to run C++ program online
//================================array template======================================================================================
#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main() {
   array<int ,5>arr{2,3,1,4,5};
   array<double,3>arr2{6.7,3.5,4.3};
   sort(arr.begin(),arr.end());
   for(auto p:arr)
   {
       cout<<p<<"\t";
   }
   cout<<"\n";
   sort(arr2.begin(),arr2.end());
   for(auto p1:arr2)
   {
       cout<<p1<<"\t";
   }
   cout<<"\n";
   cout<<"arr front="<<arr.front()<<"\n";
   cout<<"arr2 front="<<arr2.front()<<"\n";
   
   cout<<"arr back="<<arr.back()<<"\n";
   cout<<"arr2 back="<<arr2.back();
}
// Online C++ compiler to run C++ program online
//================================array template======================================================================================
#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main() {
  array<int,4>arr{41,20,31,12};
 sort(arr.begin(),arr.end());
 
  for(auto p:arr)
  {
      cout<<p<<"\t";
  }
  cout<<"\n";
  cout<<"size of arr="<<arr.size()<<"\n";
  cout<<"second highest value of arr\n";
  cout<<arr[2];
   
}
// Online C++ compiler to run C++ program online
//================================array template swapping======================================================================================
#include <iostream>
using namespace std;
#include <array>

int main() {
  array<int,4>arr{41,20,31};
  array<int,4>arr2{21,29,12,3};
  arr.swap(arr2);
  cout<<"\narray1\n";
  for(auto p:arr)
  {
      cout<<p<<"\t";
  }
  cout<<"\narray2\n";
  for(auto p1:arr2)
  {
      cout<<p1<<"\t";
  }
  
  
   
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main() {
    array<int,4>arr{30,12,3,18};
    array<int,4>arr2{2,30,46,13};
    sort(arr.begin(),arr.end());
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter sorting\n";
    sort(arr2.begin(),arr2.end());
    for(auto p1:arr2)
    {
        cout<<p1<<"\t";
    }
    cout<<"\nfront="<<arr.front()<<"\n";
    cout<<"front="<<arr2.front()<<"\n";
    cout<<"\nback="<<arr.back()<<"\n";
    cout<<"back="<<arr2.back()<<"\n";
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main() {
    array<int,4>arr{30,12,3,18};
    array<int,4>arr2{2,30,46,13};
    sort(arr.begin(),arr.end());
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter sorting\n";
    sort(arr2.begin(),arr2.end());
    for(auto p1:arr2)
    {
        cout<<p1<<"\t";
    }
    cout<<"\nfront="<<arr.front()<<"\n";
    cout<<"front="<<arr2.front()<<"\n";
    cout<<"\nback="<<arr.back()<<"\n";
    cout<<"back="<<arr2.back()<<"\n";
    cout<<"size="<<arr.size()<<"\n";
    cout<<"second highest value="<<arr[2];
    cout<<"\nAfetr swappping arr\n";
    arr.swap(arr2);
    cout<<"\narr\n";
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter swapping\n";
    
    for(auto p1:arr2)
    {
        cout<<p1<<"\t";
    }
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
// #include <algorithm>
int main() {
    vector<int>v1;
    cout<<v1.size()<<endl;
    vector<int>v{3,2,4,1,5};
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    v[2]=9;
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    v.pop_back();
     for(auto p:v)
    {
        cout<<p<<"\t";
    }
}
// Online C++ compiler to run C++ program online
//==================================vector==================================================================================
#include <iostream>
using namespace std;
#include <vector>
// #include <algorithm>
int main() {
    vector<int>v1(5,10);
    cout<<v1.size()<<endl;
    for(auto p:v1)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    v1[0]=9;
    v1[2]=12;
    v1[4]=15;
    for(auto p:v1)
    {
        cout<<p<<"\t";
    }
}
// Online C++ compiler to run C++ program online
//==================================vector==================================================================================
#include <iostream>
using namespace std;
#include <vector>
// #include <algorithm>
int main() {
    vector<int>v1;
    int n,b;
    cout<<"how many element\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v1.push_back(b);
    }
    for(auto p:v1)
    {
        cout<<p<<"\t";
    }
    cout<<"\n After deletion\n";
    v1.pop_back();
     for(auto p:v1)
    {
        cout<<p<<"\t";
    }
    
   
}
// Online C++ compiler to run C++ program online
//==========================VECTOR======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int>v;
    int n,b;
    cout<<"how many value enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter deletion\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}
// Online C++ compiler to run C++ program online
//==========================VECTOR INSERTING VALUE======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
int main()
{
    vector<int>v;
    int n,b;
    cout<<"how many values enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter deletion\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    //inserting the value from begin
    vector<int>::iterator it=v.begin();
    v.insert(it,30);
    v.insert(it+2,50);
    cout<<"\nAfter begin  inserting\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    vector<int>::iterator itt=v.end();
    v.insert(itt-1,60);
    v.insert(itt-2,50);
    cout<<"\nAfter end inserting\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }

}
// Online C++ compiler to run C++ program online
//==========================VECTOR ERASE(DELETION) VALUE======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
int main()
{
    vector<int>v;
    int n,b;
    cout<<"how many values enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter deletion\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    //ERASE the value from begin
    vector<int>::iterator it=v.begin();
    v.erase(it+2);
    v.erase(it);
    cout<<"\nAfter begin  erase\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    vector<int>::iterator itt=v.end();
    v.erase(itt-1);
    v.erase(itt-2);
    cout<<"\nAfter end erase\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    
}
// Online C++ compiler to run C++ program online
//==========================VECTOR ERASE(DELETION) VALUE======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include<algorithm>
int main()
{
    vector<int>v;
    int n,b;
    cout<<"how many values enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter deletion\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    //ERASE the value from begin
    vector<int>::iterator it=v.begin();
    v.erase(it+2);
    v.erase(it);
    cout<<"\nAfter begin  erase\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nerase value based\n";
    int x;
    cout<<"\nenter the value for search\n";
    cin>>x;
    auto j=find(v.begin(),v.end(),x);
    cout<<*j;
    cout<<"\n";
    v.erase(j);
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    
    // vector<int>::iterator itt=v.end();
    // v.erase(itt-1);
    // v.erase(itt-2);
    // cout<<"\nAfter end erase\n";
    // for(auto p:v)
    // {
    //     cout<<p<<"\t";
    // }
    //erase()
}
// Online C++ compiler to run C++ program online
//==========================VECTOR  reverse and max min ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include<algorithm>
int main()
{
    vector<int>v;
    int n,b;
    cout<<"how many values enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nreverse value\n";
    reverse(v.begin(),v.end());
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    
   cout<<"\nmax value find\n"<<*max_element(v.begin(),v.end());
   cout<<"\nmin value find\n"<<*min_element(v.begin(),v.end());

}
// Online C++ compiler to run C++ program online
//==========================VECTOR  reverse and max min and empty and clear ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include<algorithm>
int main()
{
    vector<int>v;
    int n,b;
    cout<<"how many values enter\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter value\n";
        cin>>b;
        v.push_back(b);
        
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\nreverse value\n";
    reverse(v.begin(),v.end());
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    
  cout<<"\nmax value find\n"<<*max_element(v.begin(),v.end());
  cout<<"\nmin value find\n"<<*min_element(v.begin(),v.end());
   
   cout<<"\n";
   if(v.empty())
   {
       cout<<"\n vector is empty\n";
   }
   else
   {
       cout<<"not empty\n";
   }
   v.clear();
   if(v.empty())
   {
       cout<<"\nveator is empty";
   }
   
}


    



    



    



    



    

  
  