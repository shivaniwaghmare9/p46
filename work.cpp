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

//=============================insertion sort=========================================
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    int c=0;
    bool t=true;
   public:void insertion(int arr[], int size)
   {
       for(int i=0; i<size; i++)
       {
           c++;
         int j=i;
         while(j>0 && arr[j]<arr[j-1])
           {
             int tmp;
             tmp=arr[j-1];
             arr[j-1]=arr[j];
             arr[j]=tmp;
             j--;
             t=false;
             
           }
           
       }
       
       cout<<"\ncounter hit="<<c<<endl;
   }
    
};
int main() {
    A display;
    int arr[]={6,5,4,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    display.insertion(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
// Online C++ compiler to run C++ program online\
==================================selection sort========================
#include <iostream>
using namespace std;
int c=0;
bool t=true;
void selection(int arr[],int size){
    for(int i=0; i<size; i++)
    {
        int chhotu=i;
        for(int j=i+1; j<size; j++)
        {
            c++;
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
            t=false;
            
        }
        if(t==true)
        {
            break;
        }
        
    }
    cout<<"\ncounter hit="<<c;
}


             
          
    

int main() {
  
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    selection(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}