#include <iostream>
 using namespace std;
 int main(){
  int a[3][4];
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
        cin >> a[i][j];
    }
}
bool found =false;
int key;
cin >> key;
for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
        if(a[i][j]==key){
            cout <<"key found at :" << i<< " "<<  j;
            found =true;
        }
        }
     }
    if(found==false){
        cout << "not found";
    }
    return 0;
}
