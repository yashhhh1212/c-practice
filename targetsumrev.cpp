#include <iostream>
using namespace std;
void Printarr(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void Sumpairs(int a[],int n,int target){
    for(int i =0;i<n;i++){
for(int j =i+1;j<n;j++){
 int sum=a[i]+a[j];
    if(sum==target){
        cout << a[i] << " " << a[j];
    }
}
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    int target;
    cin >> target;
    Printarr(a,n);
Sumpairs(a,n,target);
return 0;
}
