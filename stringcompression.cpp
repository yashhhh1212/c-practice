#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin , s);
int n=s.length();
int count = 1;
for(int i=0;i<n;i++){
    if(i!=n-1 && s[i]==s[i+1]){
        count ++;
    }
    else{
        cout << s[i] << " " ;
        cout <<  count ;
        cout << endl;
        count =1;
    }
}
return 0;
}
