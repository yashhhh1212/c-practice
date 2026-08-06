#include <iostream>
#include <string>

using namespace std;

int printAndCountPaths(int r, int c, int n1, int n2, string currentPath) {
    if (r == n1 - 1 && c == n2 - 1) {
        cout << currentPath << " ";
        return 1;
    }

    if (r >= n1 || c >= n2) {
        return 0;
    }

    int count = 0;
    count += printAndCountPaths(r + 1, c, n1, n2, currentPath + "V");
    count += printAndCountPaths(r, c + 1, n1, n2, currentPath + "H");
    count += printAndCountPaths(r + 1, c + 1, n1, n2, currentPath + "D");

    return count;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int totalPaths = printAndCountPaths(0, 0, n1, n2, "");
    
    cout << endl << totalPaths << endl;

    return 0;
}
