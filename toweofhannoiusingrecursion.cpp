#include <iostream>
using namespace std;
void towerofHannooi(int n,char a , char b,char c){
    if(n==0){
        return;;
    }
    towerofHannooi(n-1,a,c,b); // do disk nikiaaldo a mei se b mei daldo;
    cout <<"move disk" << " " << n << "from disk" <<" " << a << "to" << c; //last wali sbse bdi disk daldi;
    towerofHannooi(n-1,c,b,a);// ab isme se humne apni b wali tower se 2  disk nikaaldi;
    cout << endl;
}
int main(){
    int n;
    towerofHannooi(3,'a','c','b');
    return 0;
}
