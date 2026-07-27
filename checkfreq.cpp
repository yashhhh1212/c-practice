#include <iostream>
#include<string>
using namespace std;
int main(){
    string s="banana";
    int n=s.length();
    int i=0;
    int j=0;
    int count=0;
    int flag=0;
    for(i = 0; i < n; i++)
{
    flag = 0;
    for(j = 0; j < i; j++)
    {
       if(s[i]==s[j]){
        flag=1;
    }
    }
    if(flag == 1)
        continue;

    count = 0;
 
    for(j = 0; j < n; j++)
    {
       if(s[i]==s[j]){
         count++;
    }
   
}
cout << s[i] << count ;
}

   return 0;

}
