#include <iostream>
using namespace std;

void printArray( int arr[] ,int n ){
  for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
    
}
cout<<endl;
}

void ReverseArray( int arr[], int n ){
  int start = 0;
  int end = n-1;
  
  while (start<=end)
  {
       swap(arr[start],arr[end]);
       start++;
       end--;
  }  
  
  

}



int main(){
    int n;
   cout<<"enter the size of array {must be less than 1000}:";
   cin>>n;
   int ques[1000];


  for (int i = 0; i < n; i++)
{
    cin>>ques[i];
}

printArray(ques,n);
ReverseArray(ques,n);
printArray(ques,n);



return 0;
}