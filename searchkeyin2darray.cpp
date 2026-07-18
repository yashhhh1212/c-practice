#include <iostream>
using namespace std;
int main(){
    int a[3][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10}};
    int key=7;
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
        if(a[i][j]==key){
            cout <<"found at index" <<" "<< i<<"and" <<j;
        }

    }
    cout << endl;
  
}
  return 0;
}
