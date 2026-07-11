#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int price[10005];

        for(int i=0; i<n; i++) {
            cin >> price[i];
        }

        int amt;
        cin >> amt;

        sort(price, price + n);

        int i = 0;
        int j = n - 1;

        int r1 = 0, r2 = 0;

        while(i < j) {

            if(price[i] + price[j] == amt) {
                r1 = price[i];
                r2 = price[j];
                i++;
                j--;
            }
            else if(price[i] + price[j] > amt) {
                j--;
            }
            else {
                i++;
            }
        }

        cout << "Deepak should buy roses whose prices are "
             << r1 << " and " << r2 << "." << endl;
    }

    return 0;
}
