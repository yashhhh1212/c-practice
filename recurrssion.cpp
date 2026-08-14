#include<iostream>
using namespace std;
void PRintarr(int i,int n){
    if(i>n){
        return;
    }
    cout << i<< " ";
    PRintarr(i+1,n);

    }
    int main(){
        int n;
        cout <<"enter the value";
        cin >> n;
        PRintarr(1,n);
        return 0;
    }
