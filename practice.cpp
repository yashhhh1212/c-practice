#include <iostream>
#include<climits>
using namespace std;
void Prinntarr(int a[],int n){
for(int i =0;i<n;i++){
    cin >> a[i];
}
}
void largest(int a[],int n){
    int largest=  a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=INT_MIN;
        }
    }
    int seconndlargest=INT_MIN;
    for(int i=0;i<n;i++){
if(largest !=a[i] && a[i]>seconndlargest){
seconndlargest=a[i];
}
    }
    cout << seconndlargest;
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int a[1000];
    Prinntarr(a,n);
    largest(a,n);
}
