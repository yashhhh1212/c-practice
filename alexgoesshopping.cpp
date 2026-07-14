#include<iostream>
using namespace std;
#define ll long long
ll price[10005];
ll n;
ll amount,k;

bool Canbuy(){
    int cnt = 0;
    for(int i =0;i<n;i++){
        if(amount % price[i]==0){
            cnt ++;
        }
    }
    if(cnt>=k){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    cin >> n;
    ll price[10005];
    for(int i=0;i<n;i++){
        cin >> price[i];
    }
    int t;
    cin >> t;
    while(t--){
        cin >> amount >> k;
        if(amount==0){
            cout << "NO";
            continue;
        }
        bool ans=Canbuy();
        if(ans==true){
cout << "yes";
        }
        else{
            cout <<"no";
        }
    }
    return 0;
}
