#include <iostream>
using namespace std;

int main() {
    
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            count++;
        }
    }

    cout << "Number of elements strictly greater than " << x << ": " << count << endl;


}
