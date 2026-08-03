
#include<iostream>
using namespace std;
int main(){
    int a[100]={4,3,1,2,5};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        cout << endl;
    }
    for(int x=0;x<n;x++){
        cout << a[x];
    }
    return 0;
}
