#include <iostream>
using namespace std;
int main(){
    int a[10000];
    int n;
    cin >> n;
    int i;
    for( i =0;i<n;i++){
        cin >> a[i];
    }
    int found = 0; //ye loop chlaega aage humara
    for(i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[found]);
            found ++;
        }
    }
    for(i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    return 0 ;
}
