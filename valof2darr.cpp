#include<iostream>
using namespace std;
int main(){
    int a[4][4];
    int r,c;
    cout <<"enter r and c";
    cin >> r>> c;
    int val=1;
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
a[row][col]=val;
val++;
        }
    }
         for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cout << a[row][col];
    }
    cout << endl;
}
return 0;
}
