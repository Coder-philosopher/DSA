#include <iostream>
using namespace std;

//here we've written code for finding first ,
 //second minimum and maximum without sorting

void FindMax1(int arr[], int n){
 int max = INT_MIN;
 for (int i = 0; i < n; i++)
 {
    if (arr[i] > max)
    {
        max = arr[i];
    }

    
 }
    cout<<endl<<"Maximum Value is :"<<max;
}

 void FindMin1(int arr[], int n){
 int min = INT_MAX;
 for (int i = 0; i < n; i++)
 {
    if (arr[i] < min)
    {
        min = arr[i];
    }

    
 }
    cout<<endl<<"Minimum Value is :"<<min;

}


void FindMax2(int arr[], int n ){
  int max1= INT_MIN;
  int max2= INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if( arr[i] > max1 ){
        max2 = max1;
        max1 = arr[i];
    }
    else if( arr[i] > max2 && arr[i] != max1 ){
           max2 = arr[i];
    }
  }
  cout<<"second largest is :"<<max2;

}
void FindMin2(int arr[], int n ){
  int min1= INT_MAX;
  int min2= INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if( arr[i] < min1 ){
        min2 = min1;
        min1 = arr[i];
    }
    else if( arr[i] < min2 && arr[i] != min1 ){
           min2 = arr[i];
    }
  }
  cout<<"second smallest is :"<<min2;

}





void Print(int arr[], int n){

  for (int i = 0; i < n; i++) {
        cout<< arr[i]<<"  ";
    }
cout<<endl;
}



int main(){
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

 
  Print(arr, n);
//   Findmin1(arr, n);
//   FindMin1(arr, n);
 

FindMin2(arr, n);




return 0;




}