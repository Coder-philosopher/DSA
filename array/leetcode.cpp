#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array (must be less than 1000): ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Invalid array size! The array size must be between 1 and 1000." << endl;
        return 1; 
    }

    int ques[1000], sec[1000] = {0}; // Initialize `sec` with 0
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ques[i];
    }

    // Count occurrences of each unique element
    for (int i = 0; i < n; i++) {
        if (ques[i] == 1001) { 
            continue; // Skip already processed elements
        }
        
        int count = 1; // Start counting from 1 (current element itself)
        for (int j = i + 1; j < n; j++) {
            if (ques[i] == ques[j]) {
                count++;
                ques[j] = 1001; // Mark as processed
            }
        }
        sec[i] = count; // Store count for this element
    }

    // Display unique elements with their counts
    cout << "Unique elements and their counts:" << endl;
    for (int i = 0; i < n; i++) {
        if (ques[i] != 1001) {
            cout << ques[i] << ": " << sec[i] << endl;
        }
    }

    return 0;
}
