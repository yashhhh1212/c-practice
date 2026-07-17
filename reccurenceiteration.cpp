#include <iostream>
using namespace std;

int occurrence(int* a, int n, int key,int i) {
    if (i == n) {
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return occurrence(a,n,key,i+1);
}
    int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);
    
    cout << "Index of key: " << occurrence(a, n, 3,0) << endl; 
    return 0;
}
    
