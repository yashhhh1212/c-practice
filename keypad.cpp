#include <iostream>
using namespace std;
char keys[][5]={
    "","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","XYZ"
};
void phoneKeypad(char* ip,int i,char* op,int j){
    if(ip[i]=='\0'){
        op[j]='\0';
        cout << op << endl;
        return;
    }
    int d=ip[i]-'0';
    for(int k=0;keys[d][k]!='\0';k++){
op[j]=keys[d][k];
phoneKeypad(ip,i+1,op,j+1);
}
    }
    int main(){
        char a[100],op[100];
        cin >> a;
        phoneKeypad(a,0,op,0);
        return 0;
    }

