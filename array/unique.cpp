#include <iostream>
using namespace std;

int main(){
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

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ques[i];
    }
    
   cout<<"unique element is "<<ans;



}