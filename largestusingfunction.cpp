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
    void largets( int a[],int n){
        int largest=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>largest){
                largest=a[i];
            }
        }
        cout << largest;
cout << endl;
    }

int main() {
    int n;
    cin >> n;
    int a[1000];
    Printarray(a,n);
    largets(a,n);
    return 0;
    
}

