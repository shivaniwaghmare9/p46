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
///=================================move zero's===============================
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,0,2,0,3,0};
   int j=0;
   for(int i=0; i<6; i++)
   {
       if(arr[i]!=0)
       {
           int tmp;
           tmp=arr[i];
           arr[i]=arr[j];
           arr[j]=tmp;
           j++;
           
       }
   }
   for(int i=0; i<6; i++)
   {
       cout<<arr[i]<<"\t";
   }
  
  
}
// Online C++ compiler to run C++ program online
///==========================multiple missing number=================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,5,10,15,20,25};
   for(int i=0; i<5; i++)
   {
       if(arr[i+1]-arr[i]>1)
       {
          for(int j=arr[i]+1; j<arr[i+1]; j++)
          {
              cout<<j<<"\t";
          }
       }
   }
}
// Online C++ compiler to run C++ program online
///==========================single missing number=================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,3,5,7,9,11};
   for(int i=0; i<5; i++)
   {
       if(arr[i+1]-arr[i]>1)
       {
          cout<<arr[i]+1<<endl;
       }
   }
}
// Online C++ compiler to run C++ program online
///==========================find the number in array(target)r=================================
#include <iostream>
using namespace std;
int main() {
  
        int arr[]={1,2,3,4,8};
        int target=8;
        for(int i=0; i<5; i++)
        {
            if(arr[i]==target)
            {
                cout<<"yes";
                return 0;
            }
        }
        cout<<"no";
        return 0;
}
// Online C++ compiler to run C++ program online
///==========================target indexing=================================
#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,6};
  int target=10;
  for(int i=0; i<5; i++)
  {
        for(int j=0; j<5; j++)
        {
            if(arr[i]+arr[j]==target)
            
            {
                cout<<i<<"\t"<<j;
                return 0;
            }
        }
  }
  cout<<"no";
  return 0;
       
}
// Online C++ compiler to run C++ program online
//==============================desending array=================================
 #include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<size; i++)
{
    for(int j=i+1; j<size; j++)
    {
        if(arr[j]>arr[i])
        {
            int tmp; 
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}
cout<<"\nAfter applying\n";
for(int i=0; i<size;i++)
{
    cout<<arr[i]<<"\t";
}

}

// Online C++ compiler to run C++ program online
//==============================asending array=================================
 #include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<size; i++)
{
    for(int j=i+1; j<size; j++)
    {
        if(arr[j]<arr[i])
        {
            int tmp; 
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}
cout<<"\nAfter applying\n";
for(int i=0; i<size;i++)
{
    cout<<arr[i]<<"\t";
}

}

// Online C++ compiler to run C++ program online
//==============================2nd largest element=================================
 #include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<2; i++)
{
    for(int j=i+1; j<size; j++)
    {
        if(arr[j]>arr[i])
        {
            int tmp; 
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}

    cout<<arr[1];


}

// Online C++ compiler to run C++ program online
//==============================2nd smallest element=================================
 #include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<2; i++)
{
    for(int j=i+1; j<size; j++)
    {
        if(arr[j]<arr[i])
        {
            int tmp; 
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}

    cout<<arr[1];


}

// Online C++ compiler to run C++ program online
//==============================kth smallest/largest element=================================
 #include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int k;
cout<<"enter kth element"<<endl;
cin>>k;
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<k; i++)
{
    for(int j=i+1; j<size; j++)
    {
        if(arr[j]>arr[i])
        {
            int tmp; 
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}

    cout<<arr[k-1];


}

// Online C++ compiler to run C++ program online
//============================asending array is sort============================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={2,6,8,9,11};
   int size=sizeof(arr)/sizeof(arr[0]);
   bool sort=true;
   for(int i=0; i<size-1; i++){
       if(arr[i]>arr[i+1]){
           sort=false;
           break;
       }
   }
   if(sort==true){
       cout<<"array is sort"<<endl;
       return 0;
   }
   else{
       cout<<"array is not a sort";
       return 0;
   }
}
// Online C++ compiler to run C++ program online
//============================desending array is sort=====================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={19,18,16,14,13};
   int size=sizeof(arr)/sizeof(arr[0]);
   bool sort=true;
   for(int i=0; i<size-1; i++){
       if(arr[i]<arr[i+1]){
           sort=false;
           break;
       }
   }
   if(sort==true){
       cout<<"array is sort"<<endl;
       return 0;
   }
   else{
       cout<<"array is not a sort";
       return 0;
   }
}