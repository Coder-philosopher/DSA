#include <iostream>
using namespace std;

string bit( int sub){

   
    int y = 8;      
    string rem = "";  

    while (y >= 0) {
        int bit = sub % 2;       
        rem = to_string(bit) + rem;  
        sub = sub / 2;
        y--;              
    // cout << "Binary Representation: " << rem << endl;
    }
return rem;
}
int main()
{
 

    
    int ab =16;
    int br = ab >> 1;
    int bl = ab << 1;
    string abbit = bit(ab);
    cout<<"question in bits :"<<abbit<<endl;
    cout<<"answer is(in numbers) :"<<br<<endl<<bl<<endl;
    string brbit = bit(br);
    string blbit = bit(bl);
    cout<<"answer is(in bits) :"<<brbit<<endl<<blbit<<endl;

     
   
return 0;
}