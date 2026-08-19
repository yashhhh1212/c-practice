#include<iostream>
using namespace std;
int main(){
  const  int n=3;
   const int m=4;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||i==n-1||j==0||j==m-1){
                cout << a[i][j] << " ";
            }
    }
    cout << endl;
}
return 0;
    }
