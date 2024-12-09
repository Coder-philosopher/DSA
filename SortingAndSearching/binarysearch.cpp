#include <iostream>
using namespace std;


void BinarySearch(int ques[],int n,int target){
    int low=0,high=n-1;
    
    
     while(low<=high){
       
        int mid= low + (high-low)/2;
        if(ques[mid]==target){
            cout<<"element found at index :"<<mid<<endl;
            return;
        }
        else if(ques[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"element not found"<<endl;    

        }


int main() {
    int n;
    cout << "Enter the size of the array (must be less than 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid array size! The array size must be between 1 and 100." << endl;
        return 1; 
    }

    int ques[100],target;
    cout << "Enter " << n << " elements of the array{must be less than 100 and sorted}:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ques[i];
    }
   cout<<"enter the element you want to search :"; cin>>target;

    BinarySearch(ques,n,target);
 return 0;
}