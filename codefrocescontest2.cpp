#include <iostream>
using namespace std;
void solve(){
    int n; //array ki length input leli
    cin >> n;
    int zero=0; // CHECK KREGA KI O KITNE H
    for(int i=0;i<n;i++){ 
        int a;
    cin >> a;
    if(a==0){
        zero++;
    }
}
int one=n-zero;
if(one>=zero){
    cout << "Bessie\n";
}
else{
    cout << "Elsie";
}
cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    solve();
    }
    return 0;
}
