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
// Online C++ compiler to run C++ program online
//===================================2D VECTOR================================================================
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>>v1;
    int row,col,v;
    cout<<"Enter no of row\n";
    cin>>row;
    cout<<"Enter no of coulmns\n";
    cin>>col;
    for(int i=1; i<=row; i++){
        vector<int>v2;
        for(int j=1; j<=col; j++){
            cout<<"enter values\n";
            cin>>v;
            v2.push_back(v);
        }
        v1.push_back(v2);
    }
    cout<<"\n stored value are\n";
    for(int i=0; i<v1.size();i++){
        for(int j=0; j<v1[i].size();j++){
            cout<<v1[i][j]<<"\t";
        }
         cout<<"\n";
    }
}
// Online C++ compiler to run C++ program online
//===================================2D VECTOR================================================================
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>>v1;
    int row,col,v;
    cout<<"Enter no of row\n";
    cin>>row;
    cout<<"Enter no of coulmns\n";
    cin>>col;
    for(int i=1; i<=row; i++){
        vector<int>v2;
        for(int j=1; j<=col; j++){
            cout<<"enter values\n";
            cin>>v;
            v2.push_back(v);
        }
        v1.push_back(v2);
    }
    cout<<"\n stored value ar\n";
    for(int i=0; i<v1.size();i++){
        for(int j=0; j<v1[i].size();j++){
            cout<<v1[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
// Online C++ compiler to run C++ program online
//===================================2D VECTOR================================================================
#include <iostream>
#include<vector>
using namespace std;
// #include <tuple>

int main() {
    pair<int,string>p{101,"hny"};
    p=make_pair(103,"joy");
    cout<<p.first<<":"<<p.second<<"\t";
    
   
    
    
    
    vector<pair<int,string>>v;
    int rollno,n;
    string name;
    cout<<"\nHow many data stored\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Enter rollno=";
        cin>>rollno; 
        cout<<"Enter name=";
        cin>>name;
         
        v.push_back({rollno,name});
    }
    cout<<"\n stored data\n";
    for(int i=0; i<v.size();i++){
       cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
    
            
}
// Online C++ compiler to run C++ program online
//===================================VECTOR================================================================
#include <iostream>
#include<vector>
#include<iterator>

#include<algorithm>
using namespace std;
int main() {
    vector<int>v;
    // int n,b;
    // cout<<"How many values stored\n";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<"enter the val3ue\n";
    //     cin>>b;
    //     v.push_back(b);
    // }
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter popback\n";
   v.pop_back();
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter insert\n";
    vector<int>::iterator it=v.begin();
    v.insert(it+1,32);
     for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter erase\n";
    v.erase(it+2);
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter insert ending\n";
    vector<int>::iterator itt=v.end();
    v.insert(itt-1,33);
    v.insert(itt-2,35);
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter erase ending\n";
    v.erase(itt-2);
    for(auto p:v){
        cout<<p<<"\t";
    }
    // int x;
    // cout<<"\nenter the value for search\n";
    // cin>>x;
    // auto j=find(v.begin(),v.end(),x);
    // cout<<*j;
    // v.erase(j);
    // for(auto p:v){
    //     cout<<p<<"\t";
    // }
    cout<<"\nmax="<<*max_element(v.begin(),v.end());
    cout<<"\nmin="<<*min_element(v.begin(),v.end());
    
    cout<<"\nAfter revers\n";
    reverse(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n";
   if(v.empty()){
       cout<<"vector is emty";
   }
   else{
       cout<<"not emty";
   }
   cout<<"\n";
   v.clear();
   if(v.empty()){
       cout<<"vector is emty";
   }
    
            
}
// Online C++ compiler to run C++ program online
//============================size and capacity)======================================================================
#include <iostream>
using namespace std;
#include <vector>
int main() {
    vector<int>v{1,4,3};
    cout<<"size of v:"<<v.size()<<"\n";
    cout<<"capicity of v:"<<v.capacity()<<"\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter push back\n";
    v.push_back(20);
    cout<<"size of v:"<<v.size()<<"\n";
    cout<<"capicity of v:"<<v.capacity()<<"\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter second push back\n";
    v.push_back(21);
    v.push_back(21);
    v.push_back(21);
    cout<<"size of v:"<<v.size()<<"\n";
    cout<<"capicity of v:"<<v.capacity()<<"\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\nAfter popback\n";
    v.pop_back();
    for(auto p:v){
        cout<<p<<"\t";
    }
}
// Online C++ compiler to run C++ program online
//=============================swapping of two arrays======================================================================
#include <iostream>
using namespace std;
#include<array>
int main() {
    array<int,4>v1{1,2,3,4};
    array<int,4>v2{6,5,4};
    v1.swap(v2);
    cout<<"\n After swapping v1\n";
    for(auto p1:v1){
        cout<<p1<<"\t";
    }
    cout<<"\n After swapping v2\n";
    for(auto p2:v2){
        cout<<p2<<"\t";
    }
}
// Online C++ compiler to run C++ program online
//=============================ssorting and second highest value of arrays======================================================================
#include <iostream>
using namespace std;
#include<array>
#include<algorithm>
int main() {
    array<int,4>v1{4,2,1,3};
    array<int,4>v2{6,5,4,8};
    array<double,3>v3{24.1,26.2,22.3};
    sort(v1.begin(),v1.end());
    cout<<"\n After sorting v1\n";
    for(auto p1:v1){
        cout<<p1<<"\t";
    }
    cout<<"\nsecond highest vlaue of v1\n";
    cout<<v1[2];
    sort(v2.begin(),v2.end());
    cout<<"\n After sorting v2\n";
    for(auto p2:v2){
        cout<<p2<<"\t";
    }
    cout<<"\nsecond highest value of v2\n";
    cout<<v2[2];
    sort(v3.begin(),v3.end());
    cout<<"\n After sorting v3\n";
    for(auto p3:v3){
        cout<<p3<<"\t";
    }
    cout<<"\nsecond highest value of v3\n";
    cout<<v3[2];
}
// Online C++ compiler to run C++ program online
//=============================front and back values of arrays======================================================================
#include <iostream>
using namespace std;
#include<array>
#include<algorithm>
int main() {
    array<int,4>v1{4,2,1,3};
    array<int,4>v2{6,5,4,8};
    array<double,4>v3{24.1,26.2,22.3,34.2};
    
    cout<<"\n font values of array\n";
    cout<<"font:"<<v1.front()<<"\n";
    cout<<"font:"<<v2.front()<<"\n";
    cout<<"font:"<<v3.front()<<"\n";
    
     cout<<"\n back values of array\n";
    cout<<"font:"<<v1.back()<<"\n";
    cout<<"font:"<<v2.back()<<"\n";
    cout<<"font:"<<v3.back()<<"\n";
        
}
// Online C++ compiler to run C++ program online
//============================namespace ke andar namespace======================================================================================
#include <iostream>
using namespace std;
namespace cybrom{
    void student(){
        cout<<"\ncybrom student\n";
    }
    namespace bhopal{
    void student(){
        cout<<"\nbhopal student\n";
    }
  }
  void show(){
      cout<<"\nfirst program\n";
  }
  class iostreamnew{
      public:void show(){
          cout<<"\n class example\n";
      }
  }
  coutnew;
  
}
using namespace cybrom;
int main(){

    bhopal::student();
    student();
    show();
    coutnew.show();
    iostreamnew obj;
    obj.show();
}

// Online C++ compiler to run C++ program online
//=================================ADDITION OF TWO VECTORS===============================================================================================
#include <iostream>
using namespace std;
#include<vector>
int main() {
    int n;
    cout<<"enter the size of vectors:";
    cin>>n;
    
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>sum(n);
    
    for(int i=0; i<n; i++){
        cout<<"enter the element of v1:";
        cin>>v1[i];
    }
    
     for(int i=0; i<n; i++){
        cout<<"enter the element of v2:";
        cin>>v2[i];
    }
    
     for(int i=0; i<n; i++){
        sum[i]=v1[i]+v2[i];
    }
    cout<<"\nAddition of vectors\n";
     for(int i=0; i<n; i++){
        cout<<sum[i]<<"\t";
    }
//   int n;
//   cout << "Enter the size of vectors: ";
//   cin >> n;

//   vector<int> v1(n);
//   vector<int> v2(n);
//   vector<int> sum(n);

 
//   for (int i = 0; i < n; i++) {
//   cout << "Enter elements of vector v1: ";
//     cin >> v1[i];
//   }

//   for (int i = 0; i < n; i++) {
//     cout << "Enter elements of vector v2: ";
//     cin >> v2[i];
//   }

//   for (int i = 0; i < n; i++) {
//     sum[i] = v1[i] + v2[i];
//   }

//   cout << "Addition of v1 and v2: ";
//   for (int i = 0; i < n; i++) {
//     cout << sum[i] << " ";
//   }
//   cout<<endl;

  
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
int n1,n2;
cout<<"size of vector 1:";
cin>>n1;
cout<<"size of vector 2:";
cin>>n2;
 
 vector<int>v1(n1);
 vector<int>v2(n2);
 
 

for(int i=0; i<n1; i++){
    cout<<"element of v1:";
    cin>>v1[i];
}
for(int i=0; i<n2; i++){
    cout<<"element of v2:";
    cin>>v2[i];
}
int sumv1=0;
int sumv2=0;
for(int i=0; i<n1;i++){
    sumv1+=v1[i];
}
cout<<"sumof v1:"<<sumv1<<"\n";
for(int i=0; i<n2;i++){
    sumv2+=v2[i];
}
cout<<"sumof v2:"<<sumv2<<"\n";
if(sumv1>sumv2){
    cout<<"maximum of v1:"<<sumv1<<"\n";
}
else if(sumv2>sumv1){
    cout<<"maximum of v2:"<<sumv2<<"\n";
}
else{
    cout<<"both are equal";
}

}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
int n1,n2;
cout<<"size of vector 1:";
cin>>n1;
cout<<"size of vector 2:";
cin>>n2;
 
 vector<int>v1(n1);
 vector<int>v2(n2);
 vector<int>sum(max(n1,n2));
 
 

for(int i=0; i<n1; i++){
    cout<<"element of v1:";
    cin>>v1[i];
}
for(int i=0; i<n2; i++){
    cout<<"element of v2:";
    cin>>v2[i];
}

for(int i=0; i<sum.size();i++){
    if(i<v1.size()){
        sum[i]+=v1[i];
    }
    if(i<v2.size()){
        sum[i]+=v2[i];
    }

}
cout<<"\n addition\n";
for(int i=0; i<sum.size();i++){
    cout<<sum[i]<<"\t";
}

}
// Online C++ compiler to run C++ program online
//===================================paranthesess====================================================================================================
#include <iostream>
using namespace std;
#include<stack>
bool pvalid(string s)
{
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty() && stk.top()=='{')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
            
        }
        else if(s[i]==')')
        {
            if(!stk.empty() && stk.top()=='(')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
            
        }
        else if(s[i]==']')
        {
            if(!stk.empty() && stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
            
        }
    }
    if(!stk.empty())
    {
        return false;
    }
    else{
        return r;
    }
}

int main() {
    string s="{[()]}";
    if(pvalid(s))
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}
/******************************************************************************


*******************************************************************************/
#include <iostream>
#include<stack>
using namespace std;
bool pvalid(string s){
    stack<char>stk;
    bool r=true;
    for(int i=0; i<s.size();i++){
        if(s[i]=='{' ||s[i]=='(' ||s[i]=='['){
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty() && stk.top()=='{')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else if(s[i]==')')
        {
            if(!stk.empty() && stk.top()=='(')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!stk.empty() && stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
    }
    if(!stk.empty())
    {
        return false;
    }
    else
    {
        return r;
    }
}

int main()
{
    string s="{[()]}";
    if(pvalid(s)){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}
// Online C++ compiler to run C++ program online
//===================================STACKS=========================================================================================
#include <iostream>
using namespace std;
class stacks
{
    public:int *arr;
    int n,top;
    stacks(int s)
    {
       n=s;
       arr=new int[n];
       top=-1;
    }
    void pushs(int v)
    {
        if(top==n-1)
        {
            cout<<"overflow";
            return ;
        }
       
            top++;
            arr[top]=v;
    }

    int pops()
    {
        if(top==-1)
        {
            cout<<"under flow";
            return 0;
        }
        
           return top--; 
        
    }
    int tops(){
        if(top==-1)
        {
            cout<<"there no element";
            return 0;
        }
        return arr[top];
    }
    
};
int main() {
    int s,v;
    cout<<"enter size of arrays\n";  //ydi size 3 dalge to
    cin>>s;
    stacks st(s);
    for(int i=1; i<=s; i++)
    {
        cout<<"enter the value\n";    //value 1 2 3 insert karege to
        cin>>v;
        st.pushs(v);
        
    }
   
    st.pushs(12);  //overflow qki size se jyada value insert kr di
    //  while(st.top!=-1){
    //     cout<<st.tops()<<"\t";
    //     st.pops();
    // }
    cout<<"\ntop element:"<<st.tops();   //3
    cout<<"\nAfter pop element of top:";//2
    st.pops();
    cout<<st.tops();
     cout<<"\nthan After pop element of top:"; //1
    st.pops();
    cout<<st.tops();
     cout<<"\nonce After pop element of top:";////there is no element
    st.pops();
    cout<<st.tops();
    cout<<"\nalso once After pop element of top:";//underflow qki deletation -1 pr a gya
    st.pops();
    cout<<st.tops();
     
   
}
// Online C++ compiler to run C++ program online
//====================================forward_list(Orsingly list)=============================================================================================
#include <iostream>
using namespace std;
#include<forward_list>
int main() {
  forward_list<int>f;
   f.push_front(13);
   f.push_front(3);
   f.push_front(21);
   f.push_front(13);
forward_list<int>f1;  //merge ke liye dusra forward_list banaya
   f1.push_front(2);
   f1.push_front(16);
   f1.push_front(33);
   f1.push_front(23);
//isme front se value aati h phle niche vali fir uske upar-----
   cout<<"\nlist of f:"; 
   for(auto p:f){
       cout<<p<<"\t";
   }
   cout<<"\nlist of f1:";
   for(auto p:f1){
       cout<<p<<"\t";
   }
   cout<<"\nAfter merge f&f1:";
   f.merge(f1);
   for(auto p:f){
       cout<<p<<"\t";
   }
  cout<<"\nAfter sorting merge:";
  f1.sort();
  f.sort();
  f.merge(f1);
  for(auto p:f){
      cout<<p<<"\t";
  }
  cout<<"\nRevers value:";
  f.reverse();
  for(auto p:f){
      cout<<p<<"\t";
  }
  cout<<"\nunique values:";
  f.unique();
  for(auto p:f){
      cout<<p<<"\t";
  }
  cout<<"\nDistance of forward_list:";
  cout<<"size="<<distance(f.begin(),f.end());
  
}
// Online C++ compiler to run C++ program online
//===================================stack smallest 7greater value===============================================================================
#include <iostream>
using namespace std;
#include<stack>
int main() {
    stack<int>s;  //static
//     s.push(23);
//     s.push(4);
//     s.push(32);
//     s.push(2);
//     s.push(40);
//     s.push(12);
//   while(!s.empty()){
//       cout<<s.top()<<"\t";
//       s.pop();
//   }
   //user se input
   
   int n, a;
   cout<<"\nenter the value of stack\n";
   cin>>n;
   for(int i=1; i<=n; i++){
       cout<<"enter the value\n";
       cin>>a;
       s.push(a);
   }
    // while(!s.empty()){
    //     cout<<s.top()<<"\t";  //jb smallest yaa greater nikalana ho tb ye ye nhii likhna hota h
    //     s.pop();
    // }
    //===============================smallest value==============================
    
   
    int y=s.top();
    while(!s.empty()){
        if(y>=s.top()){  //y<=to greater value
        y=s.top();
        }
        s.pop();
    }
    cout<<"\nsmallest:"<<y<<"\t";
    
}



