#include <iostream>
using namespace std;

int main(){
    int n;
   cout<<"enter the size of array {must be less than 1000}:";
   cin>>n;
int ques[1000];
int min = INT_MAX;
int max = INT_MIN;


for (int i = 0; i < n; i++)
{
    cin>>ques[i];
}


for (int i = 0; i < n; i++)
{
   if (ques[i] > max ){    max = ques[i];  }
   else if (ques[i] < min ){    min = ques[i];  }
   
}

cout<<"largest: "<<max<<"lowest :"<<min;


     
return 0;
}