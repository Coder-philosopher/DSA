#include <iostream>
using namespace std;
// 1     
// 2 3   
// 4 5 6 
// 7 8 9 10
 int main()
{
//    int n;
//    cout << "Enter number: ";    
// //    cin >> n;
//    int k = 1;
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j <= i; j++)
//       {
//          cout << k<<" ";
//          k++;
//       }
//       cout << endl;
//    }
  {/*
  for single loop we can do like this
    cin >> n;
  
    int k = 1; // Start from 1
    for (int i = 1; i <= n * (n + 1) / 2; i++) {
        cout << k << " ";
        k++;

        // Check if the current number is the last in its row
        if (i == (n * (n - 1)) / 2 + n) {
            cout << endl;
            n--;
        }
    }

  */}




// 1 
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j <= i; j++)
//       {
//          cout << i+1<<" ";
//       }
//       cout << endl;
//    }
    
//     char z ;
//     cout<<"Enter a character: ";
//     // cin>>z;
//     char g = 'a';
//     char ga = 'a';





//          for(char ch = 'a';ch<=z;ch++)
//          {
//          for(char cha = 'a';cha<=z;cha++)
//          {
//              cout<<ga<<"  ";
//          }
//          ga++;
//          cout<<endl;}

         {/*a  a  a  a  
            b  b  b  b
            c  c  c  c
            d  d  d  d*/}

       




    //  for(char ch = 'a';ch<=z;ch++){
    //      for(char cha = 'a';cha<=z;cha++){
    //          cout<<g<<"  ";
    //      g++;
    //      }
    //      cout<<endl;
    // }
     //   a  b  c  d  e  
     // f  g  h  i  j  
     // k  l  m  n  o  
     // p  q  r  s  t  
    // u  v  w  x  y  



    // int row,col,size;
    // cout<<"Enter size: ";
    // cin>>size;
    // row = 1;
    // while (row <= size)
    // { 
    //     col = 1;
    //     while (col<=row)
    //     {
    //         char ch = ('A' + row - 1);
    //          cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
        
    //     row++;
        
    // }
//     A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F
    



//       int row,col,size;
//     cout<<"Enter size: ";
//     cin>>size;
//     row = 1;
//     while (row <= size)
//     { 
//         col = 1;
//         while (col<=row)
//         {
//             char ch = ('A' + row + col - 2);
//              cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
        
//         row++;
        
//     }
//     A 
// B C
// C D E
// D E F G
// E F G H I
// F G H I J K
// G H I J K L M
// H I J K L M N O
// I J K L M N O P Q
// J K L M N O P Q R S




//       int row,col,size;
//     cout<<"Enter size: ";
//     cin>>size;
//     row = 1;
//             char ch = 'A';
//     while (row <= size)
//     { 
//         col = 1;
//         while (col<=row)
//         {
//              cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
        
//         row++;
        
//     }

//     A
// B C
// D E F       
// G H I J     
// K L M N O   
// P Q R S T U





//   int size;
//     cout << "Enter size: ";
//     cin >> size;

//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (j >= size - i - 1) { 
//                 cout << "#";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     #
//    ##
//   ###
//  ####
// #####
   

//      int size;
//      cout << "Enter size: ";
//      cin >> size;
//      cout<<endl;

//      for (int i = 0; i < size; i++) {
//          for (int j = 0; j < size; j++) {
//              if ( j <= i ) { 
//                  cout << " ";
//         } else {
//                  cout << i;
//              }
//          }
//          cout << endl;
//      }
//       00000
//   1111
//    222
//     33
//      4


//PYRAMID PATTERN(I HAVENT UNDERSTOOD THIS)
// int size;
//     cout << "Enter size: ";
//     cin >> size;

//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (j >= size - i - 1) { 
//                 cout << i + 1;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     1
//  2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


return 0;
}




