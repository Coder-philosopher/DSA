#include <iostream>
using namespace std;

int main(){
    int n,sub;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n],fin[n];

  for (int i = 0; i < n; i++)
  {
    // cout<<"enter "<<i<<"th index value of array :";
    cin>>ques[i];
  }
  cout<<"enter the number to search :";
  cin>>sub;
  int count = 0;

    for (int i = 0; i < n; i++)
  {
    if ( ques[i] == sub)
    {
        count++;
    }
    }
    if (count > 0)
    {
        cout<<"The given number "<<sub<<" is repeated "<<count<<" times.";
    }
    else{
        cout<<"The given number "<<sub<<" is not repeated";
    
    
  }

  


return 0;
}