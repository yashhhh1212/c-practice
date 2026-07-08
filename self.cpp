#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int found=0;
    int key;
    cin>> key;
    for(i=0;i<n;i++){
        if(a[i]==key){
            found = 1;
            cout << "found at index" << i;
        }
            }
              if(found==0){
                cout << "not found";
          
        }
           return 0;
    }
     


    
