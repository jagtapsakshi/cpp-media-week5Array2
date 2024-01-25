#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());

    cout << "The largest three elements are: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;


}
