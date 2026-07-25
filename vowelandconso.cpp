#include <iostream>
#include<string>
using namespace std;
int main(){
    string s="hewwoo";
    int n=s.length();
    int i=0;
    int vowel=0;
    int conso=0;
    for(i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
vowel++;
        }
      
        else{
            conso++;
        }
   
        
    }
      cout << vowel << endl;
           cout << conso;
    return 0;
}
