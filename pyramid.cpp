#include <iostream>
using namespace std;

int main()
{
    // int n = 7;
    // int space = n-1;

    // for(int i=0; i<7; i++) {
    //     // this loop is for giving space before printing stars
    //     for (int s=0; s<space; s++) {
    //         cout<<" ";
    //     }
    //     space --;

    //     // printing stars
    //     for (int j=1; j<=i+1; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<endl;
    // return 0;
// this is inverted pyramid
    // int n;
    // cin >> n;
    // int space = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int s = 0; s < space; s++)
    //     {
    //         cout << " ";
    //     }
    //     space++;
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    // cout << endl;

        int n = 6;
        int space = n-1;
        for (int  i = 0; i < 6; i++)
        {
            for (int  s = 0; s < space; s++)
            {
               cout<< " ";

            }
            space --;
            for (int  j = 0; j < i + 1; j++)
            {
                cout<< j + 1 ;
            }
            cout<<"\n";

            
        }
        cout<< endl;
        
    }

