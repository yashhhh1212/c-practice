#include <iostream>
using namespace std;
int main(){
    int a[10000];
    int n;
    cin >> n;

    for( int i =0;i<n;i++){
        cin >> a[i];
    }
int j = n-1;
int target;
cin >> target;
    int i=0;
while(i<j){
int sum = a[i]+a[j];
if(sum==target){
    cout << a[i] << " " << a[j] << endl;
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
return 0;
}