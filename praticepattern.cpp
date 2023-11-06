#include <iostream>
using namespace std;

int main()
{ // solid square
  // int n;
  // cin>>n;

    // for (int  i = 0; i < n; i++)
    // {
    //     for (int  j = 0; j < n; j++)
    //     {
    //         cout<< " * ";

    //     }
    //     cout<< endl;
    // }

    // int n;
    // n=6;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    int n = 6;
    // cin >> n;
    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || i == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int j = 0; j < 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}
