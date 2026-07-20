#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int last=a[n-1];
    for(int i=n-1;i>0;i++){
        a[i]=a[i-1];
    }
    a[0]=last;
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}
