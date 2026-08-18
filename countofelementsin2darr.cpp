 #include <iostream>
 using namespace std;
 int main(){
    int count =0;
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
            count ++;
            found =true;
        }
        }
     }
     cout << count;
    if(found==false){
        cout << "not found";
    }
    return 0;
}
