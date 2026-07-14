#include<iostream>
using namespace std;
void printArray(int a[],int n){
    for (int i = 0; i <n; i++){
    cin >>  a[i];
    }
    for( int i=0;i<n;i++){
        cout <<a[i];
    }
    cout << endl;
}
void bubbleSort(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
     if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
     }
    }
}
cout << endl;
}

    

int main(){
int n;
cin >> n;
int a[10005];
printArray(a,n);
bubbleSort(a,n);
 for( int i=0;i<n;i++){
        cout <<a[i] <<" ";
    }
return 0;
}
