#include <iostream>
using namespace std;

int main(){

 int n;
   cout<<"enter the size of array :";
   cin>>n;
  int ques[n],even[n],odd[n];
 int evenc = 0;
 int oddc = 0;

  for (int i = 0; i < n; i++)
  {
    cin>>ques[i];
  }



 for (int i = 0; i < n; i++)
  {
     if (ques[i] % 2 == 0) {
        even[evenc] = ques[i];
        evenc++;
    } else {
          odd[oddc] = ques[i];
        oddc++;
    }
  }

  for (int i = 0; i < evenc; i++)
  {
    cout<<even[i]<<"  ";
  }
  
  cout<<endl;
  for (int i = 0; i < oddc; i++)
  {
    cout<<odd[i]<<"  ";
  }

     
return 0;
}