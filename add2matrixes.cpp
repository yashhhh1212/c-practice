#include<iostream>
using namespace std;
int main(){
    const int n=3;
    const int m=4;
    int a[n][m];
    int b[n][m];
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
c[i][j]= a[i][j]+b[i][j];
    }
}
 for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
cout<< c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
