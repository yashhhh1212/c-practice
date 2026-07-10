#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10000];
     int start = 0;
int end = n - 1;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
int key;
cin >> key;
while(start<=end){
    int mid = (start+end)/2;
    if(key==a[mid]){
          cout << mid;
        return;
    }
    else if(key>a[mid]){
        start=mid+1;
       
    }
    else{
        end=mid-1;
         
    }

}
return 0;
}