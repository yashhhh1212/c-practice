#include <bits/stdc++.h>
using namespace std;
void Printarray(int a[],int n){
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout << endl;
    }
    void linearSearch(int a[],int n){
     int key;
      cin  >> key;
      int found = 0;
      for(int i=0;i<n;i++){
          if(a[i]==key){
              cout << i;
              found =1;
              break;
          }
      }
              
          if(found==0){
              cout << "not found";
          }
      cout << endl;
      }


int main() {
    int n;
    cin >> n;
    int a[1000];
    Printarray(a,n);
  linearSearch(a,n);
    return 0;
    
}


