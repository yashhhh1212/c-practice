#include<iostream>
using namespace std;
int main(){
    int i=0;
    int a[100]={1,0,2,3,0};
    int index =0;
    int n=5;
    for(i=0;i<n;i++){
        if(a[i]!=0){
        swap(a[i],a[index]);
        index ++;
        }
    }
    for(int x=0;x<n;x++){
        cout << a[x];
    }
    return 0;
}
