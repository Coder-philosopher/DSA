#include <iostream>
using namespace std;

int main(){
    int n,forward,backward;
    forward = 0;
    backward = 0;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n];
   if (n <= 0) {
        cout << "Invalid array size!";return 1;}



  for (int i = 0; i < n; i++)
  {cin>>ques[i];}


    for (int i = 0; i < n-1; i++){
     if (ques[i] < ques[i+1])
     {forward++;}
     else if(ques[i] > ques[i+1]){
     backward++;}
    }
   
   
   if (forward == n-1 )
    {cout<<"Given array is Forwardly Sorted";}
    else if(backward == n-1){
        cout<<"Given array is Backwardly Sorted";}
   else{
        cout<<"Given array is not Sorted"; } 
return 0;
}

//More optimized version acc. ChatGPT
/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1; // Exit the program with an error
    }

    int ques[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ques[i];
    }

    bool isForward = true, isBackward = true;

    for (int i = 0; i < n - 1; i++) {
        if (ques[i] < ques[i + 1]) {
            isBackward = false; // Not backwardly sorted
        } else if (ques[i] > ques[i + 1]) {
            isForward = false; // Not forwardly sorted
        }

        // Early termination: If neither condition holds, it's unsorted
        if (!isForward && !isBackward) {
            cout << "Given array is not Sorted" << endl;
            return 0;
        }
    }

    if (isForward) {
        cout << "Given array is Forwardly Sorted" << endl;
    } else if (isBackward) {
        cout << "Given array is Backwardly Sorted" << endl;
    }

    return 0;
}

*/