#include<iostream>
using namespace std;
void Printarr(int a[],int n){
     n=5;
    for( int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
void selectionSort(int a[],int n){
    for(int i = 0; i<n-1;i++){
        int smallestidx= i;
    
    for( int j=i+1;j<n;j++){
if(a[j]<a[smallestidx]){
    smallestidx=j;
}
    }
    swap(a[i],a[smallestidx]);
    }
    return;
}
int main(){
    int n=5;
    int a[]={4,1,5,3,2};
    selectionSort(a,n);
    Printarr(a,n);
    return 0;
}