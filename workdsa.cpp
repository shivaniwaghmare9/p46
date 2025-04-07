//================================================TEMPLATE===================================================================================
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<typename t1>
t1 sum(t1 a,t1 b)
{
    return a+b;
}
int main() {
   cout<<sum(2,3);
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<typename t1>
t1 sum(t1 a,t1 b)
{
    return a+b;
}
template <typename t1,typename t2>
float multi(t1 x1,t2 x2)    //int-datatype to point value nhii aati
{
    return x1*x2;
}
int main() {
   cout<<sum(2,3)<<"\n";
   cout<<multi(5.6,7.6);
}
//===========================================NAMESPACE=======================================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
template <typename t1>
class cybrom
{
    public:t1 show(t1 a)
    {
        return ++a;
    }
};
template <typename t1,typename t2>
class bhopal
{
    t1 x1;
    t2 x2;
    public:bhopal(t1 a,t2 b)
    {
        x1=a;
        x2=b;
    }
    void show()
    {
        cout<<"X1="<<x1<<"\n";
        cout<<"X2="<<x2;
    }
};

int main() {
    cybrom<char>obj;
    cout<<obj.show('a')<<"\n";
    bhopal<int,int>bp(30,40);
    bp.show();
}
//=============================================NAMESPACE-INSIDE-NAMESPACE============================================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
namespace cybrom
{
    void student()
    {
        cout<<"Cybrom students"<<"\n";
    }
    namespace bhopal 
    {
        void student()
        {
            cout<<"Bhopal students""\n";
        }
    }
    void show()
    {
        cout<<"First Program""\n";
    }
    class iostreamnew
    {
        public:void show()
        {
            cout<<"Class Example""\n";
        }
    }
    coutnew;
}
using namespace cybrom;
int main()
{
    //using cybrom nhii likha to bar bar cybrom likhana hota h
    // cybrom::student();
    // cybrom::bhopal::student();
    // cybrom::show();
    //  cybrom::iostreamnew obj;
    //   obj.show();
    //   cybrom::coutnew.show();
    //========================using cybrom=================================
     student();
     bhopal::student();
     show();
     iostreamnew obj;
      obj.show();
      coutnew.show();
}
//=========================================ARRAY===============================================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
#include<array>
#include <algorithm>
int main()
{
    array<int,5>arr{4,3,6,2,1};
    cout<<"size="<<arr.size()<<"\n";
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter sorting\n";
    sort(arr.begin(),arr.end());
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nFront Value="<<arr.front();
    cout<<"\nBack Value="<<arr.back();
    cout<<"\nSecond highest Value="<<arr[3];
}
//==========================================swapping of two arrays===================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
#include<array>
#include <algorithm>
int main()
{
    array<int,5>arr{4,3,6,2,1};
    array<int,5>arr1{5,3,6,5};  //size same data not same 0 se value aa jati h
    cout<<"Swapping of Two Arrays\n";
    arr.swap(arr1);
    cout<<"After Swapping arr\n";
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter Swapping arr1\n";
    for(auto p1:arr1)
    {
        cout<<p1<<"\t";
    }
    
}
//================================================VECTOR====================================================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
#include<vector>
// #include <algorithm>
int main()
{
   vector<int>v{5,6,3,21};
   cout<<"Size="<<v.size()<<"\n";
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   cout<<"\nAfter inserting Data \n";
   v[2]=50;       //insertion indexing se
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   
   cout<<"\nCapicity="<<v.capacity();
   v.push_back(9);   //insertion last se
   cout<<"\nAfter push back Data\n";
    for(auto p:v)
   {
       cout<<p<<"\t";
   }
   cout<<"\nAfter push back Capicity="<<v.capacity();
   cout<<"\n Deletion\n";
   v.pop_back();  //delete last se
    for(auto p:v)
   {
       cout<<p<<"\t";
   }
}
//===========================================static-vector==============================================================================
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
#include<vector>
// #include <algorithm>
int main()
{
   vector<int>v(5);
   cout<<"Size="<<v.size(); //output=5
   cout<<"\nData\n";        
   for(auto p:v)
   {
       cout<<p<<"\t";   //output=0
   }
    vector<int>v1(5,10);  //insert 10
   cout<<"Size="<<v.size();
   cout<<"\nData\n";
   for(auto p:v)
   {
       cout<<p<<"\t";   //output=10
   }
   cout<<"\nInserting value indexingvise\n";
   v[1]=4;
   v[4]=9;
   v[3]=6;
   for(auto p:v)
   {
       cout<<p<<"\t";   
   }
}//====================================dynamic vector and all function==============================================================================================
//#insert
//#erase
//#find
//reverse
//*max_element
//*min_element
//#empty()or Not
//#clear()


#include <iostream>
using namespace std;
#include<vector>
#include<iterator>
#include <algorithm>
int main()
{
   vector<int>v;
   int n,b;
   cout<<"How many values enter:";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       cout<<"Enter Value:";
       cin>>b;
       v.push_back(b);
   }
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   cout<<"\nAfter pop back\n";
   v.pop_back();
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   //========koi  bhi indexing se value insert karvana iske liye phle iterator set krna hot h
   //===============begin se krna h to=========================================
   vector<int>::iterator it=v.begin();
   v.insert(it,9);
   v.insert(it+1,12);
   cout<<"\nAfter insert by indexing use of iterator first se\n";
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
    //=========================erase(delete) koi bii indexing se==========================================
   cout<<"\nAfter delete begin se\n";
   v.erase(it+2);
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   //========================end se insert=============================
   vector<int>::iterator itt=v.end();
   v.insert(itt,14);
   v.insert(itt-2,17);
   cout<<"\nAfter insert by indexing use of iterator last se\n";
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
    //=========================erase(delete) koi bii indexing se==========================================
   cout<<"\nAfter delete end se se\n";
   v.erase(itt-2);
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   //===use of FINd function value based search============================================================
//   cout<<"\nSearch value\n";
//   int x;
//   cout<<"Enter search value:";
//   cin>>x;
//   auto j=find(v.begin(),v.end(),x);
//   cout<<*j;
// //   v.erase(j);
//   for(auto p:v)
//   {
//       cout<<p<<"\t";
//   }
   cout<<"\nMaximum minimum find\n";
   cout<<"Maximum="<<*max_element(v.begin(),v.end())<<"\n";
   cout<<"Minimum="<<*min_element(v.begin(),v.end())<<"\n";
   
   cout<<"\nAfter reverse\n";
   reverse(v.begin(),v.end());
   for(auto p:v)
   {
       cout<<p<<"\t";
   }
   cout<<"\nCheck empty or not\n";
   if(v.empty())
   {
       cout<<"Vector is empty\n";
   }
   else
   {
       cout<<"Vector is not empty\n";
   }
   v.clear();
   if(v.empty())
   {
       cout<<"Vector is empty";
   }
}

// Online C++ compiler to run C++ program online
//=====================================VECTOR(pair)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
int main() {
    
    vector<pair<int,string>>v;
    
    int rollno,n;
    string name;
    
    cout<<"How many data stored:";
    cin>>n;
    
    for(int i=1;i<=n; i++)
    {
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        v.push_back({rollno,name});
    }
    cout<<"\nstored value\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
}

// Online C++ compiler to run C++ program online
//=====================================VECTOR(tuple)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <tuple>
int main() {
    
    vector<tuple<int,string,int>>v;
    
    int rollno,age,n;
    string name;
    
    cout<<"How many data stored:";
    cin>>n;
    
    for(int i=1;i<=n; i++)
    {
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        v.push_back({rollno,name,age});
    }
    cout<<"\nstored value\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<get<0>(v[i])<<":"<<get<1>(v[i])<<":"<<get<2>(v[i])<<"\n";
    }
   
}

// Online C++ compiler to run C++ program online
//=====================================VECTOR(2dvector)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() {
    
    vector<vector<int>>v;
    
    int row,col,v1;
    
    
    cout<<"enter no of row:";
    cin>>row;
    cout<<"enter no of column:";
    cin>>col;
    
    for(int i=1;i<=row; i++)
    {
        vector<int>v2;
    for(int j=1; j<=col; j++)
    {
        cout<<"enter values\n";
        cin>>v1;
        v2.push_back(v1);
    }
    v.push_back(v2);
    }
    cout<<"\nstored values are\n";
    for(int i=0; i<v.size();i++)
    {
        for(int j=0; j<v[i].size();j++)
        {
           cout<<v[i][j]<<"\t";
        }
        cout<<"\n";
    }
 }

 // Online C++ compiler to run C++ program online
//=====================================VECTOR(sum of two vectors)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    cout<<"enter the size of vectors:";
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>sum(n);
    for(int i=0; i<n; i++)
    {
        cout<<"enter the elemnt of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<"enter the elemnt of v2:";
        cin>>v2[i];
    }
    for(int i=0; i<n; i++)
    {
        sum[i]=v1[i]+v2[i];
    }
    cout<<"\nAddition of vectors\n";
    for(int i=0; i<n; i++)
    {
        cout<<sum[i]<<"\t";
    }
}

// Online C++ compiler to run C++ program online
//=====================================VECTOR(sum of two vectors)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() 
{
    
    int n;
    cout<<"enter size of vectors:";
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>sum(n);
    
    for(int i=0; i<n; i++)
    {
        cout<<"enter value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<"enter value of v2:";
        cin>>v2[i];
    }
    for(int i=0; i<n; i++)
    {
        sum[i]=v1[i]+v2[i];
    }
    cout<<"\nAddition of two vectors\n";
    for(int i=0; i<n; i++)
    {
        cout<<sum[i]<<"\t";
    }
 }
    
 // Online C++ compiler to run C++ program online
//=====================================VECTOR(sum of two vectors size is different)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() 
{
    
    int n1,n2;
    cout<<"enter size of vectors n1:";
    cin>>n1;
    cout<<"enter size of vectors n2:";
    cin>>n2;
    vector<int>v1(n1);
    vector<int>v2(n2);
    vector<int>sum(max(n1,n2));
    
    for(int i=0; i<n1; i++)
    {
        cout<<"enter value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n2; i++)
    {
        cout<<"enter value of v2:";
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
    
    cout<<"\nAddition of two vectors\n";
    for(int i=0; i<sum.size(); i++)
    {
        cout<<sum[i]<<"\t";
    }
 }
  
 // Online C++ compiler to run C++ program online
//=====================================VECTOR(sum of two vectors  and find highest value)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>

int main() 
{
    
    int n1,n2;
    cout<<"enter size of vectors n1:";
    cin>>n1;
    cout<<"enter size of vectors n2:";
    cin>>n2;
    vector<int>v1(n1);
    vector<int>v2(n2);
   
    
    for(int i=0; i<n1; i++)
    {
        cout<<"enter value of v1:";
        cin>>v1[i];
    }
    for(int i=0; i<n2; i++)
    {
        cout<<"enter value of v2:";
        cin>>v2[i];
    }
    
    int sumv1=0;
    int sumv2=0;
    for(int i=0; i<n1; i++)
    {
        sumv1+=v1[i];
    }
    cout<<"Sum of v1="<<sumv1<<"\n";
    for(int i=0; i<n2; i++)
    {
        sumv2+=v2[i];
    }
    cout<<"Sum of v1="<<sumv2<<"\n";
    cout<<"\nhighest value from vectors\n";
    if(sumv1>sumv2)
    {
        cout<<"Maximum value of v1:"<<sumv1<<"\n";
    }
    else if(sumv2>sumv1)
    {
        cout<<"Maximum value of v2:"<<sumv2<<"\n";
    }
    else
    {
        cout<<"both are equal";
    }
 }
    
 // Online C++ compiler to run C++ program online
//=====================================VECTOR(keep first occursion)=======================================================================================
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() 
{
    vector<int>v{1,2,4,1,3,2,4,3,6};
    sort(v.begin(),v.end());
    int x=1;
    for(int i=1; i<v.size(); i++)
    {
        if(v[x-1]!=v[i])
        {
            v[x]=v[i];
            x++;
        }
    }
    for(int i=0; i<x; i++)
    {
        cout<<v[i]<<"\t";
    }
    
       
 }
    
    
    


    
    


    
    


    
    





        
       
     

    


        
       
     

    


        
       
     

    


        
       
     

    


        
       
     

    


    