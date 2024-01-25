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

    int sumEven = 0, sumOdd = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int difference = sumEven - sumOdd;

    cout << "The difference between the sum of elements at even indices and odd indices is: " << difference << endl;


}
