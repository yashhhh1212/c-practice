#include<iostream>
using namespace std;
void PrintArray(int a[],int n){
            for(int i = 0;i<n;i++){
                cin >> a[i];
            }
        for(int i = 0;i<n;i++){
        cout << a[i];
    }
    cout << endl;
}
int Targetsumn(int a[],int n){
    int i =0;
    int j = n-1;
    int target;
    cin >> target;
    while(i<j){
int sum = a[i]+a[j];
if(sum==target){
    cout << a[i] << " " << a[j];
    i++;
    j--;
}
else if(sum<target){
    i++;
}
else{
    j--;
}
}
cout << endl;
}
int main(){
    int n;
    cin >> n;
    int a[10000];
PrintArray(a,n);
Targetsumn(a,n);
    return 0;
}