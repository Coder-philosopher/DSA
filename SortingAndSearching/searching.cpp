/*
{You have been given a sorted array/list 'arr' consisting of ‘n’ elements.
 You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.
} 
*/

#include <iostream>
using namespace std;


void Search(int arr[],int n, int target){
 
 int left = 0, right = n-1,first = -1,last = -1;

 while (left <= right)
 {
    if( arr[left] == target && first == -1){
        first  = left;
    }
    else if( arr[right] == target && last == -1 ){
        last = right ;
    }
    else{
        left++;
        right --;
    }

 }
  cout<<"First position of "<<target<<" is "<<first<<" Last position of "<<target<<" is "<<last;
  


}



int main(){
  int arr[] = {1,1,4,4,6,6,6,6,6,6};
  int n = sizeof(arr) / sizeof(arr[0]);

  Search(arr,n,6);


 return 0;
}