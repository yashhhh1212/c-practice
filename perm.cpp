#include <iostream>
using namespace std;
bool ispermutation(char* a,char* b){
  int freq[26]={0};
  for(int i = 0;a[i]!=0;i++){
    char ch = a[i];
    int index = ch-'a';
    freq[index] ++;
  }
  for(int i = 0;b[i]!=0;i++){
char ch  = b[i];
int index=ch-'a';
    freq[index]--;
}
for(int i = 0;i<26;i++){
  if(freq[i] != 0){
    return false;
  }
  }
  return true;
}
int main(){
    char  a[]="abcba";
     char b[]="baacb";
     if(ispermutation(a,b)==true){
      cout <<"true";
     }
     else{
      cout << " false";
     }
       return 0;
}
