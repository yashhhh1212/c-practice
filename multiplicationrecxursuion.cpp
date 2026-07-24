#include<iostream>
using namespace std;
int multiply(int a , int b){
    if(a==0 || b==0){
        return 0;
    }
    return a +multiply(a,b-1);
}
int main(){
    int x=5;
    int y=4;
    cout <<"answer is:" << multiply(x,y);
    return 0;

}