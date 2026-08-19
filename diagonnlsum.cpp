 #include <iostream>
 using namespace std;
 int main(){
    int n;
    cin >> n;
 int sum=0;
  int a[3][4];
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
        cin >> a[i][j];
    }
}
for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
        if(j=n-1-i){
            sum=sum+a[i][j];
        }
        }
        }
     
     cout << sum;
    return 0;
    }
