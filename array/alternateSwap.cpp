#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Alter(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array (must be less than 1000): ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Invalid array size! The array size must be between 1 and 1000." << endl;
        return 1; 
    }

    int ques[1000];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ques[i];
    }

    cout << "Original array:" << endl;
    printArray(ques, n);

    Alter(ques, n);

    cout << "Altered array:" << endl;
    printArray(ques, n);

    return 0;
}
