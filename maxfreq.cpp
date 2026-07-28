#include<iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int i=0;
    int j=0;
    char ans;
       int agaya=0;
    int count =0; //check krta cfhlega har ek cheez;
    int maxcount=0; //har ek char ko ydd rkhega ki kinnii baar aya
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                agaya=1;
            }
            }
                   if(agaya==1){
                 continue;
        }
        count=0,agaya=0;
        for(j=0;j<n;j++){
            if(s[i]==s[j]){
                count ++;

            }
        }
        if(count > maxcount){
            ans=s[i];
            maxcount=count;
        }
    }
    cout << ans;
    return 0;
    }
