#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=0;
    string s ="HELLO";
    while(s[i]!=0){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        i++;
    }
    cout << s;
    return 0;
}
