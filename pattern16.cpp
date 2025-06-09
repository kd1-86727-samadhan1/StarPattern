#include <iostream>
using namespace std;

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
