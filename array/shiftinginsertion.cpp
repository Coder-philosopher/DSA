#include <iostream>
using namespace std;

void Print(int arr[] ,int n){

for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<"  ";
}

cout<<endl;}


void InsertLeft(int arr[],int size,int n,int target){
  for (int i = 1; i <= n - 1 ; i++)
  {
    arr[ i- 1] = arr[i];
  }
  
  arr[n-1] = target;
  Print(arr ,size);

}


void InsertRight(int arr[], int size, int pos, int target) {
    int index = pos - 1;
    
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = target;

    Print(arr, size + 1); 
}





int main(){

  int n;
  cout<<"Enter the size of array { < 100} :";
  cin>>n;


  int arr[100];
  for (int i = 0; i < n; i++){
  cin>>arr[i];}


 Print(arr ,n);
  int pos,target;
  cout<<"Enter the Target and Position :";
  cin>>target>>pos;
   
   int rrr[] = {1,2,3,4,5,6,7};
  
  InsertRight(arr,n,pos,target);



return 0;

}