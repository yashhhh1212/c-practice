    #include <iostream>
    #include<string>
    using namespace std;
    int main(){
        string s;
        int count =0;
    bool found=false;
    getline(cin,s);
    int n=s.length()-1;
    int i=0;
    int j=i+1;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
    if(s[i]==s[j]){
        found = true;
        break;
    }
    }
    }
    cout << s << " " ;
    if(found == false){
        cout << " not duplcates";
    }
    return 0;
    }
