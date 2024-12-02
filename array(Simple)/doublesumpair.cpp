#include <iostream>
using namespace std;

int main() {
    int n, target;
    
    cout << "Enter the size of the array (must be less than 1000): ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Invalid array size! The array size must be between 1 and 1000." << endl;
        return 1;
    }

    int arr[1000];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the Target Value: ";
    cin >> target;

     for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == target) {
                                cout << "Pairs are " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
     for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            for(int k = j + 1; k < n; k++){
            if (arr[i] + arr[j] + arr[k] == target) {
                                cout << "Triplets are " << arr[i] << " " << arr[j] <<" "<<arr[k] << endl;
            }
            }
        }
    }

    return 0;
}
