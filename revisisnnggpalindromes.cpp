#include<iostream>
using namespace std;
#include<string>
int main(){
string s;
getline(cin,s);
int n=s.length();
int i=0;
int j=n-1;
    bool ans=true;
while(i<j){
    if(s[i]!=s[j]){
     ans=false;
        break;
    }
        i++;
j--;
}

if( ans==true){
    cout << "its a fucking palindrome";
}
else{
    cout  << "teri maa ki jai";
}return 0;
}


