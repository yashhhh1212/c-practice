#include<iostream>
using namespace std;
int count(int n){
if(n==0){
    return 0;
}
return n+count(n-1);
} 
int main(){
    int n=5;
    cout <<"number is" << count(n);
    count(n);
    return 0;
}
