#include <iostream>
using namespace std;

int occurrence(int* a, int n, int key) {
    if (n == 0) {
        return -1;
    }
    
    if (a[0] == key) {
        return 0;
    }
    
    int subIndex = occurrence(a + 1, n - 1, key);
    
    if (subIndex == -1) {
        return -1;
    }
    
    return subIndex + 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);
    
    cout << "Index of key: " << occurrence(a, n, 3) << endl; 
    return 0;
}
