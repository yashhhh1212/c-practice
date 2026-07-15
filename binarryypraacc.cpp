#include <bits/stdc++.h>
using namespace std;
void Printaarr(int a[],int n){
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        cout << a[i];
    }
   cout << endl;
}
void BinarySearch(int a[],int n,int key){
    int s=0;
    int e =  n-1;
    while(s<=e){
            int mid=(s+e)/2;
        if(key==a[mid]){
            cout << mid;
            break;
        }
       else if(key>a[mid]){
            s = mid+1;
        }

        else{
            e=mid-1;
        }
        }
        cout << endl;
        }


int main() {
int a[100000];
int n;
cin >> n;
int key;
cin>>key;
Printaarr(a,n);
BinarySearch(a,n,key);
return 0;;

}
