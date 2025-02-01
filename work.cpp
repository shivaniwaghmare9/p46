// Online C++ compiler to run C++ program online
//=========================================bubble sort========================================
#include <iostream>
using namespace std;
class A{
    int c=0;
    bool t=true;
    public:void bubble(int arr[],int size)
    {
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-i-1; j++)
            {
                c++;
                if(arr[j]>arr[j+1])
                {
                    int tmp;
                    tmp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=tmp;
                    t=false;
                    
                }
            }
            if(t==true)
            {
                break;
            }
        }
        cout<<"\ncounter hit="<<c<<"\n";
    }
    
};
int main() {
    A show;
    int arr[]={5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    show.bubble(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}