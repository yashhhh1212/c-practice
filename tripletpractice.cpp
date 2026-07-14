#include <iostream>
using namespace std;
    void printarr(int a[],int n){
                for(int i =0;i<n;i++){
            cin >> a[i];
        }
    }
    void TripletSum(int a[],int n,int target){
        for(int k = 0; k<n-2;k++){
            int i=k+1;
            int j = n-1;
int pairtarget=target-a[k];
        while(i<j){
             int sum = a[i]+a[j];           
              if(sum==pairtarget){
                cout << a[k]<<" "<< a[i]<< " " << a[j];
                i++;
                j--;
              }
else if(sum<pairtarget){
    i++;
}
else{
    j--;
}
        }
    }
    cout << endl;
}
    int main(){
        int n;
        cin >> n;
                int target;
            cin >> target;
        int a[10000];
        printarr(a,n);
     TripletSum(a,n,target);
   for(int i =0;i<n;i++){
            cout  << a[i] << " ";
        }
return 0;
    }
