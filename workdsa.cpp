
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template<typename t1>
t1 sum(t1 a,t1 b)
{
    return a+b;
}
template<typename t1,typename t2>
double multi(t1 x1,t2 x2)
{
    return x1*x2;
}
int main()
{
    cout<<sum(6,3)<<"\n";
    cout<<multi(4.5,6.7)<<"\n";
}
// template<typename t1>
// t1 sum(t1 a,t1 b)
// {
//     return a+b;
// }
// template<typename t1,typename t2>
// int multi(t1 x1,t2 x2)
// {
//     return x1*x2;
// }
// int main() {
//     cout<<sum(4,5)<<"\n";
//     cout<<multi(7,8)<<"\n";
// }
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<typename t1>
class cybrom{
    public:t1 show(t1 a)
    {
        return a++;
    }
};
template<typename t1,typename t2>
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
        cout<<"x1="<<x1<<"\n";
         cout<<"x2="<<x2<<"\n";
    }
};
int main()
{
    cybrom<char>obj;
    cout<<obj.show('a')<<"\n";
    bhopal<int,int>bp(30,20);
    bp.show();
}

// Online C++ compiler to run C++ program online
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
        cout<<"\nclass example\n";
    }
    }
    coutnew;
}
using namespace cybrom;
int main()
{
    student();
     bhopal::student();
     show();
     iostreamnew obj;
     obj.show();
     coutnew.show();
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    array<int,6>arr{1,3,5,2,6,7};
    array<int,6>arr1{5,4,3,2,1};
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nfront value="<<arr.front();
    cout<<"\nback value="<<arr.back();
    cout<<"\nAfter sorting\n";
    sort(arr.begin(),arr.end());
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nsize="<<arr.size()<<"\n";
    cout<<" second highest value="<<arr[4];
    cout<<"\nAfter swapping arr\n";
    arr.swap(arr1);
     for(auto p:arr)
    {
        cout<<p<<"\t";
    }
    cout<<"\nAfter swapping arr1\n";
    for(auto f:arr1)
    {
        cout<<f<<"\t";
    }
}
   