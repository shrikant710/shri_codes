#include<iostream>
using namespace std;
 int main()
 { // one sided pyramid
    // int n;
    // cin>> n;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout<< "*";
    //     }
    //     cout << endl;
    // }
    

//     // inverted one sided pyramid
//  int n;
//  cin>>n;
//  for (int  i = 0; i < n; i++)
//  {
//     for (int  j = 0; j < n - i; j++)
//     {
//         cout<<'*';
//     }
//     cout<< endl;
//  }
int n;
cin>> n;
// for (int  i = 0; i < n; i++)
// {
//     for (int  j = 0; j < i + 1; j++)
//     {
//         cout<< j + 1;
//     }
//     cout<< endl;
// }
// numeric half inverted pyramid
for (int  i = 0; i < n; i++)
{
    for (int  j = 0; j < n - i; j++)
    {
        cout<< j + 1;


    }
    cout<< endl;
}

 
 }
 

