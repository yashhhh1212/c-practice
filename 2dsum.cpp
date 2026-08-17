#include<iostream>
using namespace std;
int main(){
    int a[4][5];
    for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        cin >> a[i][j];
    }
}
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            sum=sum+a[i][j];
            cout << a[i][j] << " ";
    }
    cout << endl;
}
cout << sum;
    return 0;
}
