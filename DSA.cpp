// Online C++ compiler to run C++ program online
////============================= QUIK SORT ALGORITHM========================================
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
void qksort(int arr[],int low,int high)
{
    int pv;
    if(low<high){
        pv=divide(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);
        
    }
}
int main() {
 int arr[]={9,2,1,5,6};
 int size=sizeof(arr)/sizeof(arr[0]);
 cout<<"\nBefore applying\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
 qksort(arr,0,size-1);
 cout<<"\nAfter applying quik sort\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
}
// Online C++ compiler to run C++ program online
////============================= QUIK SORT ALGORITHM========================================
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
void qksort(int arr[],int low,int high)
{
    int pv;
    if(low<high){
        pv=divide(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);
        
    }
}
int main() {
 int arr[]={9,2,1,50,6};
 int size=sizeof(arr)/sizeof(arr[0]);
 cout<<"\nBefore applying\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
 qksort(arr,0,size-1);
 cout<<"\nAfter applying quik sort\n";
 for(int i=0; i<size; i++){
     cout<<arr[i]<<"\t";
 }
}

// Online C++ compiler to run C++ program online
//===================================merges sort=======================
#include <iostream>
using namespace std;
void merges(int a[],int low,int mid, int high){
    int i,j,k,b[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++){
        a[i]=b[i];
    }
    
}
void divide(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        divide(a,low,mid);
        divide(a,mid+1,high);
        merges(a,low,mid,high);
    }
}
void printarr(int a[],int n){
    int i;
    for(i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
}
int main() {
    int a[]={20,15,2,13,12,10,6};
    int n=sizeof(a)/sizeof(a[0]);
    printarr(a,n);
    divide(a,0,n-1);
    cout<<"--------After mergessort----------------\n";
    printarr(a,n);
}

// Online C++ compiler to run C++ program online
///============================bubbule basic==================================
#include <iostream>
using namespace std;

class top{
    public:
    void show(int arr[], int s){
        for(int i=0; i<s; i++){
        cout<<arr[i]<<",";
        }
    }
    
};
int main() {
    int arr[]={4,3,5,2,6,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    top p;
    p.show(arr,size);
    
}

// Online C++ compiler to run C++ program online
///============================bubbule basic==================================
#include <iostream>
using namespace std;

class top{
    public:
    void show(int arr[], int s){
        for(int i=0; i<s; i++){
            if(i==s-1){
        cout<<arr[i];
        }
        else{
             cout<<arr[i]<<",";
        }
    }
    }
};
int main() {
    int arr[]={4,3,5,2,6,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    top p;
    p.show(arr,size);
    
}

// Online C++ compiler to run C++ program online
///============================bubbule basic==================================
#include <iostream>
using namespace std;

class top{
    
    public:
    top bubble(int arr[], int s){
        if(s==0){
            cout<<"no data";
        }
        else{
        for(int i=0; i<s; i++){
            if(i==s-1){
        cout<<arr[i];
        }
        else{
             cout<<arr[i]<<",";
        }
    }
    }
    }
};
int main() {
    top p;
    int n;
    cout<<"enter size of either 0 or no more\n";
    cin>>n;
    int arr[n];
    // int arr[]={4,3,5,2,6,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"s="<<s<<"\n";
    p.bubble(arr,s);
    
}

// Online C++ compiler to run C++ program online
///============================bubbule basic==================================
#include <iostream>
using namespace std;
class top{
    public:
    void display(int arr[] ,int s){
        if(s==0){
            cout<<"no data";
        }
        else{
        for(int i=0; i<s; i++){
            if(i==s-1){
            cout<<arr[i];
            }
            else{
                 cout<<arr[i]<<",";
            }
        }
    }
    }
    
};
int main(){
    int n;
    cout<<"enter the values of 0 or moare\n";
    cin>>n;
    int arr[n];
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter:"<<n<<"values\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"s="<<size<<"\n";
    top p;
    p.display(arr,size);
}

// Online C++ compiler to run C++ program online
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
        cout<<"\n counter hit="<<c;
    }
    
};
int main() {
    top p;
    int arr[]={5,3,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"after applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
   
}  

// Online C++ compiler to run C++ program online
//==========================================quick sort================================
#include <iostream>
using namespace std;
int divide(int arr[],int low,int high)
{
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
    if(i<j)
    {
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
void quick(int arr[],int low,int high)
{
    int pv;
    if(low<high)
    {
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

// Online C++ compiler to run C++ program online
//==========================================quick sort================================
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
// Online C++ compiler to run C++ program online
////=======================================bubble sort===============================
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
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
   
}

// Online C++ compiler to run C++ program online
////=======================================insertion sort===============================
#include <iostream>
using namespace std;
class top{
    int c=0;
     
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
                 
            }
           
            
        }
        
       cout<<"\ncounter hit="<<c;
    }
};
int main() {
    top p;
    int arr[]={5,4,2,3,7,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
   
}

// Online C++ compiler to run C++ program online
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
    int arr[]={5,6,7,10,11,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
    quick(arr,0,size-1);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size;i++){
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
    int arr[]={5,6,7,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
    p.bubble(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
   
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    public:
    void insertion(int arr[],int s){
        for(int i=0; i<s; i++){
            int chhotu=i;
            while(chhotu>0 && arr[chhotu]<arr[chhotu-1]){
                int tmp;
                tmp=arr[chhotu-1];
                arr[chhotu-1]=arr[chhotu];
                arr[chhotu]=tmp;
                chhotu--;
            }
        }
    }
};
int main() {
    top p;
    int arr[]={6,4,3,5,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
    p.insertion(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
   
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class top{
    public:
    void selection(int arr[],int s){
        for(int i=0; i<s; i++){
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
            }
        }
    }
    
       
};
int main() {
    top p;
    int arr[]={6,4,3,5,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
    p.selection(arr,size);
    cout<<"\nAfter Applying\n";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
   
}

#include <iostream>
using namespace std;
void merges(int a[],int low,int mid,int high){
    int i,j,k,b[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++){
        a[i]=b[i];
    }
}
void divide(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        divide(a,low,mid);
        divide(a,mid+1,high);
        merges(a,low,mid,high);
    }
}
void printarr(int a[],int n){
    int i;
    for(i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    
}
int main(){
    int a[]={6,5,3,4,7,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    printarr(a,n);
    divide(a,0,n-1);
    cout<<"=====After Applying=====\n";
    printarr(a,n);
}

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector=============================================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
    vector<int>v;
    int n,b;
    cout<<"How may element"<<"\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter element"<<"\n";
        cin>>b;
        v.push_back(b);
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector=============================================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
    vector<int>v;
    int n,b;
    cout<<"How may element"<<"\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter element"<<"\n";
        cin>>b;
        v.push_back(b);
    }
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}

// Online C++ compiler to run C++ program online
//==========================================dynamic program of vector=============================================================
#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
int main() {
    vector<int>v;   
    int n ,b;
    cout<<"How many element"<<"\n";
    cin>>n;
   cout<<"size of v="<<v.size()<<"\n"; 
   for(int i=1; i<=n; i++){
       cout<<"enter the number"<<"\n";
       cin>>b;
       v.push_back(b);
   }
    for(auto p:v){
        cout<<p<<"\t";             
    }  
    
    v.pop_back();
    cout<<"\nAfter deletion\n";
    for(auto p:v){
        cout<<p<<"\t";             
    }   
    
   
}

#include <iostream>
#include <vector>
#include <iterator>  //erase mangta h iterator
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(23);
    v.push_back(15);
    v.push_back(47);
    for(auto p:v){
        cout<<p<<"\t";   //push_back
    }
    cout<<"\n";
    v.pop_back();
     for(auto p:v){
        cout<<p<<"\t";   //pop_back
    }
    cout<<"\n";
    vector<int>::iterator it=v.begin();
    v.erase(it+2);      //second indexing erase
    for(auto p:v){
        cout<<p<<"\t";   //erase 
    }
    
    
}
// Online C++ compiler to run C++ program online
//================================search based erase====================================
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iterator>
int main() {
   vector<int>v;
   v.push_back(7);
   v.push_back(1);
   v.push_back(6);
   v.push_back(4);
   v.push_back(9);
   for(auto p:v){
       cout<<p<<"\t";
   }
  cout<<"\n After insert\n";
  vector<int>::iterator  it=v.begin();
  v.insert(it,8);
  for(auto p:v){
      cout<<p<<"\t";
  }
  cout<<"\n after erase\n";
  v.erase(it+1);
  for(auto p:v){
      cout<<p<<"\t";
  }
  int x;
    cout<<"enter the value for search";
    cin>>x;
    auto j=find(v.begin(),v.end(),x);
    cout<<*j; //or ye value ke according hota h delete
    
    v.erase(j); // address ke according hm delete kr sakte h
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
    
   
}

// Online C++ compiler to run C++ program online
//================================search based erase====================================
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iterator>
int main() {
   vector<int>v;
   v.push_back(7);
   v.push_back(1);
   v.push_back(6);
   v.push_back(4);
   v.push_back(9);
   for(auto p:v){
       cout<<p<<"\t";
   }
  cout<<"\n After insert\n";
  vector<int>::iterator  it=v.begin();
  v.insert(it,8);
  for(auto p:v){
      cout<<p<<"\t";
  }
  cout<<"\n after erase\n";
  v.erase(it+1);
  for(auto p:v){
      cout<<p<<"\t";
  }
  cout<<"\n";
  int x;
    cout<<"enter the value for search";
    cin>>x;
    auto j=find(v.begin(),v.end(),x);
    cout<<*j; //or ye value ke according hota h delete
    
    v.erase(j); // address ke according hm delete kr sakte h
    cout<<"\n";
    
    for(auto p:v){
        cout<<p<<"\t";
    }
   cout<<"\n After reverse\n";
     reverse(v.begin(),v.end());
     for(auto p:v){
        cout<<p<<"\t";
    }
     
    cout<<"\n max value="<<*max_element(v.begin(),v.end());
     cout<<"\n min value="<<*min_element(v.begin(),v.end());
cout<<"\n";
     if(v.empty())
     {
         cout<<"\nvector is emty\n";
     }
     else{
         cout<<"vector is not emty";
     }
     v.clear();
     if(v.empty())
      {
         cout<<"\nvector is emty\n";
     }
    
   
}


// Online C++ compiler to run C++ program online
//===============================pairh===================================
#include <iostream>
using namespace std;
#include <vector>
//#include <tuple>
int main() {
    vector<pair<int,string>>v;
    int rollno,n;
    string name;
    cout<<"\n How many data stored\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Enter roll:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        v.push_back({rollno,name});
    }
    cout<<"\nstored data are\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
    
}
// Online C++ compiler to run C++ program online
//===============================tuple==========================================
#include <iostream>
using namespace std;
#include <vector>
#include <tuple>
int main() {
    vector<tuple<int,string,int>>v;
    int rollno,age,n;
    string name;
    cout<<"\n How many data stored\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Enter roll:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        v.push_back({rollno,name,age});
    }
    cout<<"\nstored data are\n";
    for(int i=0; i<v.size(); i++){
        cout<<get<0>(v[i])<<":"<<get<1>(v[i])<<":"<<get<2>(v[i])<<"\n";
    }
}
