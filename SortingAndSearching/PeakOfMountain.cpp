#include <iostream>>
using namespace std;

void Search(int arr[], int n){
  int s = 0,e = n-1;
  int mid  = (e + s)/2;
  int max = arr[mid];
  while (e >= s)
  {
     if (arr[max - 1] > arr[max])
     {
        max = arr[mid - 1];
     }
     else if( arr[max + 1] > arr[max] ){
        max = arr[max + 1];
     }
     
  }
  


}

int main(){

  int arr[10] = {1,2,4,5,7,8,4,3,2,1};
  int n = 10;

  Search(arr,n);

  return 0;


}