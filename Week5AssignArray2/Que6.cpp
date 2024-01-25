#include <iostream>
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

    int result = 0;

    for (int i = 0; i < n; ++i) {
        result ^= arr[i];
    }

    cout << "The unique number in the array is: " << result << endl;

}
