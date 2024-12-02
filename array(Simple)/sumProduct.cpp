#include <iostream>
using namespace std;

int main(){

 int n;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n],sum,mult;
 sum = 0;
 mult = 1;
  for (int i = 0; i < n; i++)
  {
    cin>>ques[i];
  }
  for (int i = 0; i < n; i++)
  {
      sum = sum + ques[i];
      mult = mult*ques[i];  
  }

  cout<<"Sum and Multiplication of elements of array is "<<sum<<" and "<<mult<<" Respectively. ";
  

     
return 0;
}