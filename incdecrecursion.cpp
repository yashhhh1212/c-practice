#include<iostream>
using namespace std;
int dec(int n){
    if(n==0){
        return 1;
    }
    cout << n << endl;
    dec(n-1);
}
int inc(int n){
    if(n==0){
        return 0;
    }
        inc(n-1);
    cout << n << endl;


}
int main(){
    int n=5;
    cout << inc(n-1)<< endl;
    cout << dec(n-1);
    return 0;
}
