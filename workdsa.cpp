
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