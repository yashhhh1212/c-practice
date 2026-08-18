

#include<iostream>
using namespace std;
void Max(int a[3][3],int maxi){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]<maxi){
                maxi=a[i][j];
            }
        }
    }
    cout << maxi << " ";
}
int main(){
    int a[3][3];
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
}
   }
   Max(a,0);
return 0;
}
