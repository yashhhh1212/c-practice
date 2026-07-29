#include<iostream>
using namespace std;
void largest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondlargest=arr[1];
     for(int i=0;i<n;i++){
        if(largest !=arr[i] && arr[i] > secondlargest){
            secondlargest=arr[i];
        }
     }
     cout << secondlargest;
     cout << endl;
}
int main(){
int a[1000];
int n;
cin >> n;
int i;
for( i=0;i<n;i++){
    cin >> a[i];
}
largest(a,n);
return 0;
}
