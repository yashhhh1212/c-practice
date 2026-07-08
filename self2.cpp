#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int largest = a[0];
    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    int secondlargest =a[1];
    for(i=0;i<n;i++){
        if(a[i]!=largest && a[i]>secondlargest){
            secondlargest=a[i];

        }
    }
    cout << secondlargest;
    return 0;
}