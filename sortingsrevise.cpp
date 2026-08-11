#include <iostream>
using namespace std;
void BS(int a[],int i,int j,int n){
    for(i=0;i<n-1;i++){
        int smallestisx=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[smallestisx])
            smallestisx=j;
        }
        swap(a[i],a[smallestisx]);
    }
    cout << endl;
}
int main(){
    int a[]={1,5,2,3,4};
    int n=5;
    BS(a,0,0,5);
    for(int k=0;k<n;k++){
        cout <<a[k];

    }
    return 0;
}
