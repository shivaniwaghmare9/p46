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


        
       
     

    


        
       
     

    


    