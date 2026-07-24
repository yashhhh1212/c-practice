#include<iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int target){
    if(s > e){
        return -1;
    }
    int mid = (s+e)/2;

    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarysearch(arr, s, mid - 1, target);
    }
    return binarysearch(arr, mid + 1, e, target);
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(int);
    int target = 7;
    cout << "key is found at index: " << binarysearch(a, 0, n - 1, target);
    return 0;
}
