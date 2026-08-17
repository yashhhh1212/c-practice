#include<iostream>
using namespace std;
int main(){
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
   
   
    for(int j=0;j<3;j++){
   int sum=0;  
        for(int i=0;i<2;i++){
            sum=sum+a[i][j];
        }
          cout << sum << endl;
    }
  
    return 0;
}
