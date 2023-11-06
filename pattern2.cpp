#include<iostream>
using namespace std;

int main()
{
    // for (int  i = 0; i < 6; i++)
    // {
    //     if (i == 0 || i == 5)
    //     {
    //         for (int  j = 0; j < 6; j++)
    //         {
    //             cout << '*';

    //         }
    //     }
    //         else{
    //             cout << '*';

    //             for (int i = 0; i < 6; i++)
    //             {
    //                 cout << ' ';

    //             }
    //             cout << " * ";
    //         }
    //         cout<<endl;
        
        
    // }
    // generic form 
    int rowCount, colCount;
    cin >> rowCount;
    cin>> colCount;

        for (int  i = 0; i < rowCount; i++)
    {
        if (i == 0 || i == 5)
        {
            for (int  j = 0; j < colCount; j++)
            {
                cout << '*';

            }
        }
            else{
                cout << '*';

                for (int i = 0; i < rowCount; i++)
                {
                    cout << ' ';

                }
                cout << " * ";
            }
            cout<<endl;
        
        
    }
    
    
}