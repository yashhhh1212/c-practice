#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i;
    bool found = false;
int n=s.length();
for( i=0;i<n;i++){
    int count =0;
    for(int j=0;j<n;j++){
        if(s[i]==s[j])
        count++;
    }
if(count==1){
    found=true;
    cout << s[i];
break;
}
}
if(found==false){
    cout << " this shitty thing doesnt exist";
}
else{
    cout << "agaya bhai";
}
return 0;
}
