#include<iostream>
using namespace std;
int main(){
    int a[][4]={{1,2,3},
{6,7,8,9},
{9,1,2,3}};
    int n=3;int m=4;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout << a[row][col]<<" ";
        }
        cout << endl;
    }
    return 0;

}
