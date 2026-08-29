#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string result="";
    int n=s.length();
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(s[i]==result[j]){
                found = true;
                break;
            }
        }
    if(found==false){
        result+=s[i];
    }
}
cout << result;
    return 0;
}
