#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int space = n - 1;

    for (int i = 0; i < 6; i++)
    {
        for (int s = 0; s < space; s++)
        {
            cout << " ";
        }
        space--;
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

   space = 0;
 

    for (int i = 0; i < 6; i++)
    {
        space++;
        for (int s = 0; s < space; s++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < n - i-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}