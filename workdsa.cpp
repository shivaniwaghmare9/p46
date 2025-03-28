

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

// Online C++ compiler to run C++ program online
//==========================VECTOR (pair) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    pair<int,string>p{101,"shiv"};  //direct pair
    p=make_pair(102,"shiva");
    cout<<p.first<<":"<<p.second;
    
    //vector ke andar pair
    vector<pair<int,string>>v;
    int rollno,n;
    string name;
    cout<<"\nhow many data stored\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"\nenter the name:";
        cin>>name;
        cout<<"\nenter the rollno:";
        cin>>rollno;
       // v.push_back(make_pair(rollno,name));
        v.push_back({rollno,name});
    }
    cout<<"\nstored data\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }

}

// Online C++ compiler to run C++ program online
//==========================VECTOR (tuple) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    tuple<int,string,int>p{101,"shiv",23};  //direct pair
    p=make_tuple(102,"shiva",21);
    cout<<"rollno:"<<get<0>(p)<<"\n";
    cout<<"name:"<<get<1>(p)<<"\n";
    cout<<"name:"<<get<2>(p)<<"\n";
    
    //vector ke andar tuple
    vector<tuple<int,string,int>>v;
    int rollno,age,n;
    string name;
    cout<<"\nhow many data stored\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"\nenter the name:";
        cin>>name;
        cout<<"\nenter the rollno:";
        cin>>rollno;
        cout<<"\nenter the age:";
        cin>>age;
       // v.push_back(make_tuple(rollno,name,age));
        v.push_back({rollno,name,age});
    }
    cout<<"\nstored data\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<get<0>(v[i])<<":"<<get<1>(v[i])<<":"<<get<2>(v[i])<<"\n";
    }
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (2d vector) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<vector<int>>v1;
    int row,col,v;
    cout<<"\nenater no of row:";
    cin>>row;
    cout<<"\nenter no of col:";
    cin>>col;
    for(int i=1; i<=row; i++)
    {
        vector<int>v2;
     for(int j=1; j<=col; j++)
     {
         cout<<"\nenter the values:";
         cin>>v;
         v2.push_back(v);
     }
     v1.push_back(v2);
    }
    cout<<"\nstored values are\n";
    for(int i=0; i<v1.size(); i++)
    {
        for(int j=0; j<v1[i].size(); j++)
        {
            cout<<v1[i][j]<<"\t";
        }
        cout<<"\n";
    }
  
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (addition of two vector) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
   int n;
   cout<<"enter the size of vector\n";
   cin>>n;
   
   vector<int>v1(n);
   vector<int>v2(n);
   vector<int>sum(n);
   for(int i=0; i<n; i++)
   {
       cout<<"enter the element of v1:";
       cin>>v1[i];
   }
   for(int i=0; i<n; i++)
   {
        cout<<"enter the element of v2:";
       cin>>v2[i];
   }
   for(int i=0; i<n; i++)
   {
       sum[i]=v1[i]+v2[i];
   }
   cout<<"\n addition v1 and v2\n";
   for(int i=0; i<n; i++)
   {
       cout<<sum[i]<<"\t";
   }
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (addition of two vector different size) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
   int n1,n2;
   cout<<"enter the size of vector1:";
   cin>>n1;
   cout<<"\nenter the size of vector2:";
   cin>>n2;
   
   vector<int>v1(n1);
   vector<int>v2(n2);
   vector<int>sum(max(n1,n2));
   for(int i=0; i<n1; i++)
   {
       cout<<"\nenter the element of v1:";
       cin>>v1[i];
   }
   for(int i=0; i<n2; i++)
   {
        cout<<"\nenter the element of v2:";
       cin>>v2[i];
   }
   for(int i=0; i<sum.size(); i++)
   {
       if(i<v1.size())
       {
          sum[i]+=v1[i];
       }
       if(i<v2.size())
       {
           sum[i]+=v2[i];
       }
   }
   cout<<"\n addition v1 and v2\n";
   for(int i=0; i<sum.size(); i++)
   {
       cout<<sum[i]<<"\t";
   }
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (vector sum and max value) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
   int n1,n2;
   cout<<"enter the size of vector1:";
   cin>>n1;
   cout<<"\nenter the size of vector2:";
   cin>>n2;
   
   vector<int>v1(n1);
   vector<int>v2(n2);
 
   for(int i=0; i<n1; i++)
   {
       cout<<"\nenter the element of v1:";
       cin>>v1[i];
   }
   for(int i=0; i<n2; i++)
   {
        cout<<"\nenter the element of v2:";
       cin>>v2[i];
   }
   int sumv1=0;
   int sumv2=0;
   for(int i=0; i<n1; i++)
   {
       sumv1+=v1[i];
   }
   cout<<"\nsum of v1="<<sumv1<<"\n";
   for(int i=0; i<n2; i++)
   {
       sumv2+=v2[i];
   }
   cout<<"\nsum of v2="<<sumv2<<"\n";
   if(sumv1>sumv2)
   {
       cout<<"\nmaximum value of v1 vector:"<<sumv1<<"\n";
   }
   else if(sumv2>sumv1)
   {
       cout<<"\n maximum value of v2 vector:"<<sumv2<<"\n";
   }
   else
   {
       cout<<"\nboth vector are equal:"<<"\n";
   }
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (vector sum defferent size) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
  
  vector<int>v1{1,2,3};
  vector<int>v2{3,4,5,6};
  int a=0; 
  int b=0;
  for(int i=0; i<v1.size();i++)
  {
      a=a*10+v1[i];
  }
  for(int i=0; i<v2.size();i++)
  {
      b=b*10+v2[i];
  }
  cout<<a+b<<"\t";
  
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (vector sum defferent size) ======================================================================================
#include <iostream>
using namespace std;
#include <vector>
int main()
{
  
  vector<int>v1{1,2,3};
  vector<int>v2{3,4,5,6};
  int a=0; 
  int b=0;
  for(int i=0; i<v1.size();i++)
  {
      a=a*10+v1[i];
  }
  for(int i=0; i<v2.size();i++)
  {
      b=b*10+v2[i];
  }
  cout<<a+b<<"\t";
  
}

// Online C++ compiler to run C++ program online
//==========================VECTOR (lambda function)======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
  vector<int>v{3,5,6,4,2,1,8};
  sort(v.begin(),v.end(),less<int>());
  for(auto p:v)
  {
      cout<<p<<"\t";
  }
  cout<<"\n";
  sort(v.begin(),v.end(),greater<int>());
  for(auto p:v)
  {
      cout<<p<<"\t";
  }
  cout<<"\n";
  sort(v.begin(),v.end(),[](int a,int b){return a>b;});
  for(auto p:v)
  {
      cout<<p<<"\t";
  }
  cout<<"\n";
  cout<<[](int a){return a+10;}(6)<<"\n";
  cout<<[](int a,int b){return a>b;} (2,3)<<"\n";  //true 1,false 0
  auto k=[](int a) {return a*a;};
  cout<<k(9);
 }

 // Online C++ compiler to run C++ program online
//=============================STACK(STATIC)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
   stack<int>st;
   st.push(28);
   st.push(8);
   st.push(36);
  st.push(12);
   st.push(42);
   while(!st.empty())
   {
       cout<<st.top()<<"\t";
       st.pop();
   }
}
// Online C++ compiler to run C++ program online
//=============================STACK(DYNAMIC)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
   stack<int>st;
  int n, a;
  cout<<"enter how many values\n";
  cin>>n;
  for(int i=1; i<=n; i++)
  {
      cout<<"enter value\n";
      cin>>a;
      st.push(a);
  }
  while(!st.empty())
  {
      cout<<st.top()<<"\t";
      st.pop();
  }
}
// Online C++ compiler to run C++ program online
//=============================STACK(DYNAMIC SMALLEST VALUE)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
   stack<int>st;
  int n, a;
  cout<<"enter how many values\n";
  cin>>n;
  for(int i=1; i<=n; i++)
  {
      cout<<"enter value\n";
      cin>>a;
      st.push(a);
  }
  int x=st.top();
  while(!st.empty())
  {
     if(x<=st.top())
     {
         x=st.top();
     }
     st.pop();
  }
  cout<<"result:"<<x<<"\t";
}
// Online C++ compiler to run C++ program online
//=============================STACK(DYNAMIC greatest VALUE)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
   stack<int>st;
  int n, a;
  cout<<"enter how many values\n";
  cin>>n;
  for(int i=1; i<=n; i++)
  {
      cout<<"enter value\n";
      cin>>a;
      st.push(a);
  }
  int x=st.top();
  while(!st.empty())
  {
      if(x<=st.top())
      {
          x=st.top();
      }
      st.pop();
  }
  cout<<"result:"<<x<<"\t";
}
// Online C++ compiler to run C++ program online
//=============================STACK(PARANTHESES)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int valid(string s)
{
    if(s.size()<=4)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main() 
{
   string s;
   cout<<"enter name\n";
   cin>>s;
   bool j=valid(s);
   if(j)
   {
       cout<<"valid";
   }
   else
   {
       cout<<"invalid";
   }
      
}
// Online C++ compiler to run C++ program online
//=============================STACK(PARANTHESES)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
int valid(string s)
{
    if(s.size()<=4)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    string s;
    cout<<"enter name:";
    cin>>s;
    bool j=valid(s);
    if(j){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}
// Online C++ compiler to run C++ program online
//=============================STACK(PARANTHESES)===================================================================================
#include <iostream>
using namespace std;
#include<stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
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
    string s="{[()}";
    if(pvalid(s))
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
    
}

    



    



    



    



    

  
  