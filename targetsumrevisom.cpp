#include <iostream>
using namespace std;
int pairsum(int a[],int n,int i,int j,int target){
    while(i<j){
        if(a[i]+a[j]==target){
            cout << a[i] <<" ";
            cout <<  a[j];
            i++;
            j--;
        }
        else if(a[i]+a[j]> target){
            j--;
        }
        else{
            i++;
        }
    }

cout << endl;
    }
int main(){
    int n;
    cin >> n;
    int i=0;
    int j=n-1;
int a[1000];
for(int k=0;k<n;k++){
    cin >> a[k];
}
int target;
cin >> target;
pairsum(a,n,i,j,target);
return 0;
}
