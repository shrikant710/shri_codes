#include <iostream>
using namespace std;

int main()
{
    // outer loop - row based
    // for (int  i = 0; i < 3; i++)
    // {   //inner loop - col based
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<< "*";

    //     }
    //     cout<< endl;

    // }
    // for (int  i = 0; i < 4; i++)
    // {
    //     for (int  j = 0; j < 4; j++)
    //     {
    //         cout<< "*";

    //     }
    //     cout<< endl;
    // }
    // int n;
    // cin>>n;

    //     for (int  i = 0; i < n; i++)
    // {
    //     for (int  j = 0; j < n; j++)
    //     {
    //         cout<< "*";

    //     }
    //     cout<< endl;
    // }

    for (int i = 0; i < 3; i++)

    {
        if (i == 0 || i == 2)
        {

            for (int j = 0; j < 5; j++)
            {
                cout << '*';
            }
        }
        else
        {
            cout << "*";
            for (int i = 0; i < 3; i++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << endl;
    }
}
