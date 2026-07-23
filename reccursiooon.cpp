#include <iostream>

using namespace  std;
void printnum(int n){
    if(n==0){
        return;
    }
    printnum(n-1);
    cout << n;
}
int main(){
int n=5;
cout << "thee count is: " << " ";
printnum(n);
return 0;
}