#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int b[]={5,6,7,8,9};
    int m=sizeof(b)/sizeof(int);
    int i=0;
    int j=0;
    int index=0;
    int k[100];
    while(i<n && j<m){
        if(a[i]<b[j]){
            k[index]=a[i];
            i++;
            index ++;
        }
        else if(a[i]>b[j]){
            k[index]=b[j];
            j++;
            index++;
        }
        else{
            k[index]=a[i];
            i++;
            j++;
            index++;
        }
    }
    while(i<n){
        k[index]=a[i];
 i++;
 index++;
    }
while(j<m){
    k[index]=b[j];
    j++;
    index++;

}
while(i==j){
    k[index]=a[i];
    i++;
    j++;
    index++;
}
for(int x=0;x<index;x++){
    cout << k[x];
}
return 0;
}
