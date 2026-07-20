
#include <iostream>
using namespace std;
void Printarr(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void tripletsum(int a[],int n,int target){
    for(int k=0;k<n-2;k++){
        int i=k+1;
        int j=n-1;
        while(i<j){
           int sum=a[i]+a[j];
            int triplet=target-a[k];
            if(sum==triplet){
                cout << a[k] << " " << a[i] << " " << a[j];
                i++;
                j--;
            }
            else if(sum > triplet){
                j--;
            }
            else { 
i++;
        }
    }
   
}
 cout << endl;
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    Printarr(a,n);
    int target;
    cin >> target;
    tripletsum(a,n,target);
    return 0;
}
