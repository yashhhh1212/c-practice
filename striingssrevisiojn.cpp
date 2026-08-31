#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
getline(cin,s);
string result="";
for(int i=0;i<s.length();i++){
    bool found=false;
    for(int j=0;j<result.length();j++){
        if(result[j]==s[i]){
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
