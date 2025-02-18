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

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void bubble(int arr[],int s)
    {
        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s-i-1; j++)
            {
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before apllying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void insertion(int arr[],int s){
    for(int i=0; i<s; i++){
        c++;
        int chhotu=i;
        while(chhotu>0 && arr[chhotu]<arr[chhotu-1]){
            int tmp;
            tmp=arr[chhotu-1];
            arr[chhotu-1]=arr[chhotu];
            arr[chhotu]=tmp;
            chhotu--;
            f=false;
            
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
    cout<<"Before applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}
// Online C++ compiler to run C++ program online
//==============================================insertion==================================
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void insertion(int arr[],int s){
    for(int i=0; i<s; i++){
        c++;
        int chhotu=i;
        while(chhotu>0 && arr[chhotu]<arr[chhotu-1]){
            int tmp;
            tmp=arr[chhotu-1];
            arr[chhotu-1]=arr[chhotu];
            arr[chhotu]=tmp;
            chhotu--;
            f=false;
            
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
    cout<<"Before applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void insertion(int arr[],int s){
        for(int i=0; i<s; i++){
            c++;
            int chhotu=i;
            while(chhotu>0 && arr[chhotu]<arr[chhotu-1]){
                int tmp;
                tmp=arr[chhotu-1];
                arr[chhotu-1]=arr[chhotu];
                arr[chhotu]=tmp;
                chhotu--;
                f=false;
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}

// Online C++ compiler to run C++ program online
//=================================selectio sort==================================
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void selection(int arr[],int s){
        for(int i=0; i<s; i++){
            c++;
            int chhotu=i;
            for(int j=i+1; j<s; j++)
            {
                if(arr[chhotu]>arr[j])
                {
                    chhotu=j;
                }
            }
            if(chhotu!=i){
                int tmp;
                tmp=arr[i];
                arr[i]=arr[chhotu];
                arr[chhotu]=tmp;
              
                f=false;
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
    int arr[]={5,3,2,6,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.selection(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void selection(int arr[],int s){
        for(int i=0;i<s; i++){
            c++;
            int chhotu=i;
            for(int j=i+1; j<s; j++)
            {
                if(arr[chhotu]>arr[j])
                {
                    chhotu=j;
                }
            }
            if(chhotu!=i){
                int tmp;
                tmp=arr[i];
                arr[i]=arr[chhotu];
                arr[chhotu]=tmp;
                f=false;
                
            }
            if(f==true){
                break;
            }
        }
        cout<<"\n counter hit="<<c;
        
    }
    
};

int main() {
    top p;
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.selection(arr,size);
    cout<<"\nAfter applying\n";
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void bubble(int arr[],int s)
    {
        for(int i=0; i<s; i++)
        
        {
            c++;
            int chhotu=i;
            for(int j=i+1; j<s; j++)
            {
                if(arr[chhotu]>arr[j])
                {
                    chhotu=j;
                }
                
            }
            if(chhotu!=i)
            
            {
                int tmp;
                tmp=arr[i];
                arr[i]=arr[chhotu];
                arr[chhotu]=tmp;
              
                f=false;
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
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}

// Online C++ compiler to run C++ program online
//==========================================bubble sort================================
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void bubble(int arr[],int s)
    {
        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s-i-1; j++)
            {
                c++;
                if(arr[j]>arr[j+1])
                {
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
 
}

// Online C++ compiler to run C++ program online
//==========================================insertion sort================================
#include <iostream>
using namespace std;
class top{
    int c=0;
    bool f=true;
    public:
    void insertion(int arr[],int s){
        for(int i=0; i<s; i++){
            c++;
            int chhotu=i;
            while(chhotu>0 && arr[chhotu]<arr[chhotu-1]){
                int tmp;
                tmp=arr[chhotu-1];
                arr[chhotu-1]=arr[chhotu];
                arr[chhotu]=tmp;
                chhotu--;
                f=false;
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
 
}

// Online C++ compiler to run C++ program online
//==========================================selection sort================================
#include <iostream>
using namespace std;
class top
{
    int c=0;
     bool f=true;
    public:
    void selection(int arr[],int s)
    {
        for(int i=0; i<s; i++)
        {
            c++;
            int chhotu=i;
            for(int j=i+1; j<s; j++)
            {
                if(arr[chhotu]>arr[j])
                {
                    chhotu=j;
                }
            }
            if(chhotu!=i)
            {
                int tmp;
                tmp=arr[i];
                arr[i]=arr[chhotu];
                arr[chhotu]=tmp;
                 f=false;
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    p.selection(arr,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
 
}

// Online C++ compiler to run C++ program online
//==========================================merge sort================================
#include <iostream>
using namespace std;
int divide(int arr[],int low,int high){
    int pv=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<pv){
            i++;
        }
        while(arr[j]>pv){
            j--;
        }
        if(i<j){
            int tmp;
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    while(i<j);
    int tmp;
    tmp=arr[low];
    arr[low]=arr[j];
    arr[j]=tmp;
    return j;
    
}
void quick(int arr[],int low,int high){
    int pv;
    if(low<high){
        pv=divide(arr,low,high);
        quick(arr,low,pv-1);
        quick(arr,pv+1,high);
    }
}
    
            

int main() {
    
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    quick(arr,0,size);
    cout<<"\nAfter applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
 
}
