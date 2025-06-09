#include <iostream>
using namespace std;

// 1
// 2 2
// 3   3
// 4     4
// 5 5 5 5 5

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
            {
                cout << i << " ";
            }
            else
            {
                cout << "  "; // 2 Space
            }
        }
        cout << "\n";
    }
    return 0;
}

// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
            {
                cout << i << " ";
            }
            else
            {
                cout << "  "; // 2 Space
            }
        }
        cout << "\n";
    }
    return 0;
}

// *
// * *
// *   *
// *     *
// * * * * *

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << "  "; // 2 Space
            }
        }
        cout << "\n";
    }
    return 0;
}