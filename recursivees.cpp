#include<iostream>
using namespace std;
int facts(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n* facts(n-1);
}
int main(){
int n=6;
cout << facts(n) << endl;
return 0;
}
