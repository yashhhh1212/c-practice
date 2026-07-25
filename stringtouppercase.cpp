#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string s="hello";
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]-32;
    }
    cout << s;
    return 0;
}
