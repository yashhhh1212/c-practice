#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nWave Print Output:\n";
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int i = rows - 1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
