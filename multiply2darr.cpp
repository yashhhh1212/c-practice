#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[2][3];
    int c[2][3];
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin >> b[i][j];
        }
    }
 
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
            c[i][j]=0;
c[i][j]=a[i][k]*b[j][j];
        }
    }
}
    for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        cout << c[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}
