#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n-1;i++){
        s[i+1]-s[i];
        cout << s[i];
        cout <<  s[i+1]-s[i];
    }
cout << s[n-1];
return 0;
}
