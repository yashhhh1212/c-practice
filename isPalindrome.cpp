#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char*a){
    int len =strlen(a);
    int i,j;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char  a[1000];
    cin.getline(a,100);
    if(isPalindrome(a)==true){
        cout << "palindrome";
    }
else{
    cout << "not palindrome";
}
return 0;
}
