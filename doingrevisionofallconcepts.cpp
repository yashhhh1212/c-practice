#include <iostream>
using namespace std;
void ss(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallestidx])
            {
                smallestidx = j;
            }
        }
        swap(a[i], a[smallestidx]);
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int a[100] = {4, 3, 1, 2, 5};
    int smallest;
    ss(a, 5);
cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
