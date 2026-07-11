#include <iostream>
using namespace std;
int main(){
    int a[10000];
    int n;
    cin >> n;
    int i;
    int j;
    for( i =0;i<n;i++){
        cin >> a[i];
    }
    int target;
   cin >> target;
    int k;
  
    for(k=0;k<n-2;k++){
        i=k+1;//repetition na ho 
        j=n-1;//two pointer clash na kare 
      int pairtarget=target-a[k];
while(i<j){
        int sum = a[i]+a[j];
    if(sum==pairtarget){
      cout << a[k] << " "<< endl << a[i] << " "<<endl << a[j] << " ";
      i++;
      j--;
    }
    else if(sum < pairtarget){
        i++;
    }
    else{
        j--;
    }
}
   
}
 return 0;
}