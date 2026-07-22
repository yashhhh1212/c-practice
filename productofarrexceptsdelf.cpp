#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(int);

    int ans[100];

    for (int i = 0; i < n; i++) {

        int product = 1;

        for (int j = 0; j < n; j++) {

            if (i != j) {
                product = product * a[j];
            }

        }

        ans[i] = product;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
