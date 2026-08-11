#include<iostream>
using namespace std;
void SelectionSort(int a[],int i,int j,int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout << endl;
}
int main(){
    int a[]={5,2,1,3,4};
    int n=5;
    SelectionSort(a,0,0,5);
for(int k=0;k<n;k++){
    cout << a[k];
}
return 0;
}
