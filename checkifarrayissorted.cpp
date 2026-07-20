#include<iostream>
using namespace std;
int main(){
    int i;
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    bool sorted=1;
    for(i=0;i<n-1;i++){
if(a[i]>a[i+1]){
    sorted=0;
}
    }
    if(sorted==1){
        cout << "sorted";
    }
    else{
        cout << "notsorted";
    }
return 0;
    }
