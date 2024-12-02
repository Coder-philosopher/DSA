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

    int ques[1000], sec[1000] = {0};
    cout << "Enter " << n << " elements of the array{must be less than 1000}:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ques[i];
    }

    for (int i = 0; i < n; i++) {
        if (ques[i] == 1001) { 
            continue; 
        }
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (ques[i] == ques[j]) {
                count++;
                ques[j] = 1001; 
            }
        }
        sec[i] = count; 
    }

    cout << "Elements and their counts:" << endl;
    for (int i = 0; i < n; i++) {
        if (ques[i] != 1001) {
            cout << ques[i] << ": " << sec[i] << endl;
        }
    }

    for (int i = 0; i < n; i++) {
        if (ques[i] != 1001) {  
            if (sec[i] == 1) {
                cout << "Element " << ques[i] << " is Unique" << endl;
            } else {
                cout << "Element"<<ques[i]<< "has Duplicate Copies" << endl;
            }           
        }
    }

    return 0;
}
