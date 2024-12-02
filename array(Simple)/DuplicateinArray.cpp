#include <iostream>
using namespace std;
// or we can use (^ - XOR) also.
int main() {
    int n;
    cout << "Enter the size of the array (must be less than 1000): ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Invalid array size! The array size must be between 1 and 1000." << endl;
        return 1; 
    }
   
    int arr[1000];
    cout << "Enter " << n << " elements of the array{must be less than 1000}:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    int sumn = n*(n-1)/2;

    int duplicate = sum - sumn;
    cout<<"Duplicate Integer is :"<<duplicate;

    return 0;

}