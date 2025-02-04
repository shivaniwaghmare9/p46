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
//============================desending array is sort======================================
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
// Online C++ compiler to run C++ program online
//============================zero counting in array==========================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={0,2,0,0,0,0,3};
   int size=sizeof(arr)/sizeof(arr[0]);
   int count=0;
  
   for(int i=0; i<size-1; i++){
       if(arr[i]==0){
           count++;
       }
   }
     cout<<"zero in array"<<"\t"<<count;    
     return 0;
}
// Online C++ compiler to run C++ program online
//============================revers array================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={6,4,7,8,3,2};
   int size=sizeof(arr)/sizeof(arr[0]);
   int start=0;
   int end=5;
   for(int i=0; i<size; i++){
       cout<<arr[i]<<"\t";
   }
   while(start<end){
       int tmp;
       tmp=arr[start];
       arr[start]=arr[end];
       arr[end]=tmp;
       start++;
       end--;
   }
   cout<<"\nafter\n";
   for(int i=0; i<size; i++){
       cout<<arr[i]<<"\t";
   }
   
      
      
   
}
// Online C++ compiler to run C++ program online
//============================palindrome array========================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={6,3,4,4,3,6};
   int size=sizeof(arr)/sizeof(arr[0]);
 for(int i=0; i<size/2; i++){
     if(arr[i]!=arr[size-i-1]){
         cout<<"not a palin";
         return 0;
     }
 }
      
     cout<<"palin";
     return 0;
   
}
// Online C++ compiler to run C++ program online
//============find the majority element in array=====================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,2,2,2,3,3,3,4,4};
   int size=sizeof(arr)/sizeof(arr[0]);
   int majority=0;
   int maxcount=0;
   for(int i=0; i<size; i++){
       int count=0;
       for(int j=0; j<size; j++){
           if(arr[i]=arr[j]){
               count++;
           }
       }
       if(count>maxcount){
           maxcount=count;
           majority=arr[i];
       }
   }
   cout<<"majority element:"<<majority;
   return 0;
}
// Online C++ compiler to run C++ program online
//==============================desending array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,8,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0; i<size; i++){
       for(int j=i+1; j<size; j++){
           if(arr[j]>arr[i]){
               int tmp;
               tmp=arr[j];
               arr[j]=arr[i];
               arr[i]=tmp;
           }
       }
        
   }
   cout<<"\nafter applying\n";
   for(int i=0; i<size; i++){
   cout<<arr[i]<<"\t";
   }
  
}
// Online C++ compiler to run C++ program online
//==============================asending array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,8,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0; i<size; i++){
       for(int j=i+1; j<size; j++){
           if(arr[j]<arr[i]){
               int tmp;
               tmp=arr[j];
               arr[j]=arr[i];
               arr[i]=tmp;
           }
       }
        
   }
   cout<<"\nafter applying\n";
   for(int i=0; i<size; i++){
   cout<<arr[i]<<"\t";
   }
  
}
// Online C++ compiler to run C++ program online
//==============================2nd smallest element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,8,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0; i<2; i++){
       for(int j=i+1; j<size; j++){
           if(arr[j]<arr[i]){
               int tmp;
               tmp=arr[j];
               arr[j]=arr[i];
               arr[i]=tmp;
           }
       }
        
   }
   
   cout<<arr[1]<<"\t";
   
  
}
// Online C++ compiler to run C++ program online
//==============================2nd largest element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,8,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0; i<2; i++){
       for(int j=i+1; j<size; j++){
           if(arr[j]>arr[i]){
               int tmp;
               tmp=arr[j];
               arr[j]=arr[i];
               arr[i]=tmp;
           }
       }
        
   }
   
   cout<<arr[1]<<"\t";
   
  
}
// Online C++ compiler to run C++ program online
//==============================kth element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,8,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int k;
   cout<<"enter the kth\n";
   cin>>k;
   
   for(int i=0; i<k; i++){
       for(int j=i+1; j<size; j++){
           if(arr[j]<arr[i]){
               int tmp;
               tmp=arr[j];
               arr[j]=arr[i];
               arr[i]=tmp;
           }
       }
        
   }
   
   cout<<arr[k-1]<<"\t";
   
  
}
// Online C++ compiler to run C++ program online
//==============================maximum  element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,10,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int max=arr[0];
   for(int i=0; i<size; i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
   cout<<max;
}
// Online C++ compiler to run C++ program online
//==============================minimum  element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,10,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int mini=arr[0];
   for(int i=0; i<size; i++){
       if(arr[i]<mini){
           mini=arr[i];
       }
   }
   cout<<mini;
}
// Online C++ compiler to run C++ program online
//=============================target sum indexing print  element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int target=10;
   for(int i=0; i<size; i++){
       for(int j=i+1; j<size; j++){
           if(arr[i]+arr[j]==target)
           {
             cout<<"element of target sum:"<<arr[i]<<"\t"<<arr[j]<<"\n"<<"indexing of array:"<<i<<"\t"<<j;
               return 0;
           }
       }
   }
   cout<<"no";
   return 0;
   
}
// Online C++ compiler to run C++ program online
//=============================fing oftarget   element in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int target=4;
   for(int i=0; i<size; i++){
       if(arr[i]==target){
           cout<<"yes";
           return 0;
       }
   }
   cout<<"no";
   return 0;
  
   
}
// Online C++ compiler to run C++ program online
//=============================revers array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,4,9,3,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<size; i++){
       cout<<arr[i]<<"\t";
   }
   int start=0;
   int end=5;
   while(start<end){
       int tmp;
       tmp=arr[start];
       arr[start]=arr[end];
       arr[end]=tmp;
       start++;
       end--;
   }
   cout<<"\nafter applying\n";
   for(int i=0; i<size; i++){
       cout<<arr[i]<<"\t";
   }
   
  
   
}
// Online C++ compiler to run C++ program online
//=============================sinlge missing element array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,3,5,7,9,11,13,15};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<7; i++)
   {
       if(arr[i+1]-arr[i]>1)
       {
           cout<<++arr[i]<<"\t";
          
       }
   }
 }
 // Online C++ compiler to run C++ program online
//=============================multiple missing element array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,7,12,16,20,25};
   int size=sizeof(arr)/sizeof(arr[0]);
   int j=0;
   for(int i=0; i<6; i++){
       if(arr[i+1]-arr[i]>1){
           for(int j=arr[i]+1; j<arr[i+1];j++){
               cout<<j<<"\t";
           }
       }
   }
}
// Online C++ compiler to run C++ program online
//=============================frequency element array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,3,3,2,2,1,1,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<size; i++)
   {
       int count=1;
       if(arr[i]!=-1)
       {
           for(int j=i+1; j<size; j++)
           {
               if(arr[i]==arr[j])
               {
                   count++;
                   arr[j]=-1;
               }
           }
           cout<<"the freu of"<<arr[i]<<"is"<<count<<endl;
       }
   }
   
}
// Online C++ compiler to run C++ program online
//=============================unique element array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,3,3,2,2,1,1,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<size; i++)
   {
      
       bool duplicate=false;
       if(arr[i]!=-1)
       {
           for(int j=i+1; j<size; j++)
           {
               if(arr[i]==arr[j])
               {
                  
                   arr[j]=-1;
                   duplicate=true;
               }
           }
            if(!duplicate && arr[i]!=-1){
           cout<<arr[i];
       }
          
       }
      
   }
   
}
// Online C++ compiler to run C++ program online
//=============================duplicate element array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,3,3,2,2,1,1,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<size; i++)
   {
      
       bool duplicate=false;
       if(arr[i]!=-1)
       {
           for(int j=i+1; j<size; j++)
           {
               if(arr[i]==arr[j])
               {
                  
                   arr[j]=-1;
                   duplicate=true;
               }
           }
            if(duplicate ){
           cout<<arr[i];
       }
          
       }
      
   }
   
}
// Online C++ compiler to run C++ program online
//=============================palindrome array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,4,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int i=0;
   int j=3;
   while(i<j){
       if(arr[i]!=arr[j]){
           cout<<"not a palin";
           return 0;
       }
       i++;
       j--;
   }
   cout<<"palin";
   return 0;
   
     
}
// Online C++ compiler to run C++ program online
//=============================move zero's in end array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,0,0,0,3};
   int size=sizeof(arr)/sizeof(arr[0]);
   int j=0;
   for(int i=0; i<size; i++){
       if(arr[i]!=0){
           int tmp;
           tmp=arr[i];
           arr[i]=arr[j];
           arr[j]=tmp;
           j++;
       }
   }
   for(int i=0; i<size; i++){
       cout<<arr[i];
   }
   
   
}
// Online C++ compiler to run C++ program online
//=============================zero count in array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,0,0,0,0,3};
   int size=sizeof(arr)/sizeof(arr[0]);
   int count=0;
   for(int i=0; i<size; i++){
       if(arr[i]==0){
           count++;
       }
   }
   cout<<"zero in array:"<<count;
   return 0;
}
// Online C++ compiler to run C++ program online
//=============================asending sort array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,3,4,6,7};
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
       cout<<"array is not sort";
       return 0;
   }
   
   
   
}
// Online C++ compiler to run C++ program online
//=============================desending sort array===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={7,6,5,8,3,2};
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
       cout<<"array is not sort";
       return 0;
   }
   
   
   
}
// Online C++ compiler to run C++ program online
//=============================majority===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,2,5,5,5,5,4,4,4};
   int size=sizeof(arr)/sizeof(arr[0]);
   int majority=0;
   int maxcount=0;
   for(int i=0; i<size; i++){
       int count=0;
       for(int j=0; j<size; j++){
           if(arr[i]==arr[j]){
               count++;
           }
           
       }
       if(count>maxcount){
           maxcount=count;
           majority=arr[i];
       }
   }
   cout<<"majority:"<<majority;
  }
  // Online C++ compiler to run C++ program online
//=============================keeping first occursion===================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,4,3,4,3,5,6,1,2,2};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<size; i++){
       for(int j=i+1; j<size; j++){
           if(arr[i]==arr[j]){
               arr[j]=-1;
           }
       }
       
   }
   for(int i=0; i<size; i++){
           if(arr[i]!=-1){
               cout<<arr[i];
           }
       }
   
   
      
  }
   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
 
   
        
   
   
  

   
        
   
   
  

   
        
   
   
  


   
        
   
   
  

   
        
   
   
  

   
        
   
   
  

   
        
   
   
  
