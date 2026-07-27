#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "hahaeuaj";
    int n=s.length();
    int i=0;
    int j=n-1;
    int found =1;
    while(i<=j){
        if(s[i]!=s[j]){
            found =0;
              cout << "nahi h palindrome";
              break;
        }
           
        i++;
        j--;
    }

    if(found==1){
        cout << " palindrome";
    }
return 0;
}
