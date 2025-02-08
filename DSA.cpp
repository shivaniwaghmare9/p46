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
