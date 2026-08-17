#include<iostream>
using namespace std;
int main(){
    int a[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> a[i][j];
        }
    }
     for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+a[i][j];
           
}
     }
     int sum=0;
   for(int j=0;j<4;j++){
    for(int i=0;i<3;i++){
        sum=sum+a[i][j];
           
}
    cout << sum << endl; 
   }
     return 0;
    }
   
