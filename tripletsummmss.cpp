#include<iostream>
using namespace std;
int triple(int a[],int n,int target){
   for(int k=0;k<n-2;k++){
 int   i=k+1;
  int j =n-1;
int taargetsum=target-a[k];
while(i<j){
    if(a[i]+a[j]==taargetsum){
        cout << a[k] << a[i] << a[j];
        i++;
        j--;
    }
    else if(a[i]+a[j]>taargetsum){
        j--;
    }
    else{
        i++;
    }
    }
}
  cout  << endl;
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int x=0;x<n;x++){
        cin >> a[x];
    }
int target;
cin >> target;
triple(a,n,target);
return 0;

}
