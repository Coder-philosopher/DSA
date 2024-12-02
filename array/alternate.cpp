#include <iostream>
using namespace std;

int main(){

 int n;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n],dupl[n];

  for (int i = 0; i < n; i++)
  {
    cin>>ques[i];
  }
 for (int i = 0; i < n; i++)
  {
     if (i % 2 == 0) {
        cout << "Even index " << i << ": " << ques[i] << "  ";
    } else {
        cout << "Odd index " << i << ": " << ques[i] << "  ";
    }

  }     
     for (int i = 0; i < n; i++)
     {
        //creating duplicate of array

        dupl[i] = ques[i];
     }
     
return 0;
}