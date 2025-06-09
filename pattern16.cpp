#include <iostream>
using namespace std;

// * * * * * * 
// * 3 4 5 6 * 
// * 4 5 6 7 *
// * 5 6 7 8 *
// * 6 7 8 9 *
// * * * * * *

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = i; j <= i + 5; j++)
        {
            if (i == 1  || i == 6 || j == i + 5 || j == i)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
