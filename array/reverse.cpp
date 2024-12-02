#include <iostream>
using namespace std;

int main(){
    int n;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n],fin[n];

  for (int i = 0; i < n; i++)
  {
    // cout<<"enter "<<i<<"th index value of array :";
    cin>>ques[i];
  }


  for (int i = n-1 ;i>=0; i--)
  {
    cout<<"value of "<<i<<"th index of array is :"<<ques[i]<<endl;
    fin[n - i-1] = ques[i];
  }




  for (int i = 0; i < n; i++)
  {
    cout<<"value of "<<i<<"th index of array is :"<<fin[i]<<endl;

  }
  


return 0;
}