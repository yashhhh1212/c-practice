#include<iostream>
using namespace std;
#include<string>
int main(){
string s;
getline(cin,s);
for(int i=0;i<s.length()/2;i++){
 swap(s[i],s[s.length()-1-i]);
}
    cout  <<  s;
    return 0;
}
