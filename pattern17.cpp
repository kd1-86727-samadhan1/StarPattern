#include <iostream>
using namespace std;

int main()
{
    int k = 7;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j != 5)
            {
                cout << j << " ";
            }
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "  "; // 2 Space
        }
        k = k - 2;
        for (int j = i; j >= 1; j--)
        {

            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}