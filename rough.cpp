// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 
 int sum=1;
 for (int i=1; i<=5;++i)
 {
     sum=sum*i;
 }
 cout<<sum;
}

// Online C++ compiler to run C++ program online
//=================================bubble sort==========================================
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    
    public:
    void bubble(int arr[],int s){
        for(int i=0; i<s; i++){
            for(int j=0; j<s-i-1; j++){
                c++;
                if(arr[j]>arr[j+1]){
                    int tmp;
                    tmp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=tmp;
                    f=false;
                    
                }
            }
            if(f==true){
                break;
            }
        }
        cout<<"\ncounter hit="<<c;
    }
    
};
int main() {
    top p;
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"before applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nafer applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
   
}